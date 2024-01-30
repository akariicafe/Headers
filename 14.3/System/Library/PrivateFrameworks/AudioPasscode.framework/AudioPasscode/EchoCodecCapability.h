@class NSArray;

@interface EchoCodecCapability : AUPasscodeCodecCapability <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } frameSizeRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } numFrameRepeatRange;
@property (readonly, nonatomic) NSArray *algorithmVersionNumbers;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } hpfCutOffFreqRange;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
