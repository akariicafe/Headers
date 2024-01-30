@interface OKTransitionCube : OKTransitionCATransition {
    unsigned long long _direction;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void)setSettingDirection:(unsigned long long)a0;
- (void)prepareInView:(id)a0;
- (unsigned long long)settingDirection;
- (BOOL)needsToBeFront;

@end
