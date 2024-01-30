@class NSValue;

@interface NUJSScale : NUJSRational

@property (readonly) struct { long long x0; long long x1; } scale;
@property (readonly) NSValue *value;

- (id)initWithScale:(struct { long long x0; long long x1; })a0;
- (id)nu_unwrapJSValue;

@end
