@interface SCNTimingFunction : NSObject <NSSecureCoding> {
    struct __C3DTimingFunction { } *_timingFunction;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)functionWithTimingMode:(long long)a0;
+ (id)functionWithCAMediaTimingFunction:(id)a0;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTimingFunctionRef:(struct __C3DTimingFunction { } *)a0;
- (struct __C3DTimingFunction { } *)c3dTimingFunction;

@end
