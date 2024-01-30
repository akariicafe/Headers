@interface CBSoftWakeAABCDelegate : NSObject {
    long long _state;
}

@property (readonly, nonatomic) struct CustomCurve { float _E[20]; float _L[20]; int size; } curve;

+ (BOOL)isSupported;

- (BOOL)isActive;
- (id)init;
- (long long)action:(long long)a0;

@end
