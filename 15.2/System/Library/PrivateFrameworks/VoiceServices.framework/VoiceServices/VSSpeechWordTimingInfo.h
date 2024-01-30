@interface VSSpeechWordTimingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double startTime;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;

+ (unsigned long long)extraBytesFromUTF8ToUTF16With:(const char *)a0 totalLength:(unsigned long long)a1 begin:(unsigned long long)a2 end:(unsigned long long)a3;
+ (id)wordTimingInfoFrom:(id)a0 timestamps:(id)a1;
+ (id)utf16TimingInfoWithUTF8Range:(id)a0 withText:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
