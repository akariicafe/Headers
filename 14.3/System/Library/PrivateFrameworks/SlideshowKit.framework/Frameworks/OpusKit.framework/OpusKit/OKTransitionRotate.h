@interface OKTransitionRotate : OKTransitionCATransition {
    unsigned long long _direction;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void)prepareInView:(id)a0;
- (BOOL)needsToClip;
- (void)setSettingRotationDirection:(unsigned long long)a0;
- (unsigned long long)settingRotationDirection;

@end
