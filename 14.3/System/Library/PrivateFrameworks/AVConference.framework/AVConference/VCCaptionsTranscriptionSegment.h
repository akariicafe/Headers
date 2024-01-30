@class NSString;

@interface VCCaptionsTranscriptionSegment : NSObject <NSCopying, NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int confidence;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConfidence:(unsigned int)a0 text:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
