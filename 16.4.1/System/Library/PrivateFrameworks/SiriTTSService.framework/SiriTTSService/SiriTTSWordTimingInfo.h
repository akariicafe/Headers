@class NSString;

@interface SiriTTSWordTimingInfo : NSObject <NSSecureCoding>

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;
@property (nonatomic) void /* unknown type, empty encoding */ startTime;
@property (nonatomic) void /* unknown type, empty encoding */ textRange;
@property (nonatomic, readonly) NSString *description;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithStartTiming:(double)a0 textRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
