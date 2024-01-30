@class NSValue;

@interface NUJSTime : NUJSRational

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) NSValue *value;

- (id)initWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)nu_unwrapJSValue;

@end
