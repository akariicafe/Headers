@interface OKTransitionAlignedFlip : OKTransitionCATransition {
    unsigned long long _direction;
}

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)initWithSettings:(id)a0;
- (id)init;
- (BOOL)needsToClip;
- (void)prepareInView:(id)a0;
- (void)setSettingDirection:(unsigned long long)a0;
- (unsigned long long)settingDirection;

@end
