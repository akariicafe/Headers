@class NSString;

@interface VMVoicemailTranscriptSegment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long confidenceRating;
@property (readonly, copy, nonatomic) NSString *substring;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } substringRange;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) double timestamp;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTranscriptionSegment:(id)a0 confidenceThreshold:(float)a1;

@end
