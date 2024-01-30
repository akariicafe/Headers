@class UIView, UIMotionEffect;

@interface _UIMotionEffectEngineClient : NSObject {
    UIMotionEffect *_effect;
    UIView *_view;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithMotionEffect:(id)a0 view:(id)a1;
- (void).cxx_destruct;

@end
