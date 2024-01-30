@class UIView, UIMotionEffect;

@interface _UIMotionEffectEngineClient : NSObject {
    UIMotionEffect *_effect;
    UIView *_view;
}

- (id)initWithMotionEffect:(id)a0 view:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
