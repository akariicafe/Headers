@class NSArray, NSString, SFVoiceAnalytics;

@interface SFTranscriptionSegment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *alternativeConfidences;
@property (readonly, nonatomic) NSString *phoneSequence;
@property (readonly, nonatomic) NSString *ipaPhoneSequence;
@property (readonly, copy, nonatomic) NSString *substring;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } substringRange;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) NSArray *alternativeSubstrings;
@property (readonly, nonatomic) SFVoiceAnalytics *voiceAnalytics;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)_initWithSubstring:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 timestamp:(double)a2 duration:(double)a3 confidence:(float)a4 alternativeSubstrings:(id)a5 alternativeConfidences:(id)a6 phoneSequence:(id)a7 ipaPhoneSequence:(id)a8 voiceAnalytics:(id)a9;

@end
