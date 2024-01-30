@interface OKTransitionCameraIris : OKTransitionCATransition {
    struct CGPoint { double x; double y; } _location;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (id)initWithSettings:(id)a0;
- (void)prepareInView:(id)a0;
- (void)setSettingLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })settingLocation;
- (BOOL)needsToClip;

@end
