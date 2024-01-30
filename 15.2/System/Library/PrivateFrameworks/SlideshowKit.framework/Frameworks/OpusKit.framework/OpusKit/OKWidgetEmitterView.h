@class OFEmitterView;

@interface OKWidgetEmitterView : OKWidgetView {
    unsigned int _seed;
    OFEmitterView *_emitterView;
    struct CGPoint { double x; double y; } _originalEmitterPosition;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithWidget:(id)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (double)settingBirthRate;
- (void)setSettingBirthRate:(double)a0;
- (id)settingEmitterCells;
- (void)setSettingEmitterCells:(id)a0;
- (double)settingLifetime;
- (void)setSettingLifetime:(double)a0;
- (double)settingScale;
- (void)setSettingScale:(double)a0;
- (double)settingSpin;
- (void)setSettingSpin:(double)a0;
- (double)settingVelocity;
- (void)setSettingVelocity:(double)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (void)resumeEmitter;
- (void)pauseEmitter;
- (BOOL)isEmitting;
- (double)settingEmitterDepth;
- (void)setSettingEmitterDepth:(double)a0;
- (id)settingEmitterMode;
- (void)setSettingEmitterMode:(id)a0;
- (struct CGPoint { double x0; double x1; })settingEmitterPosition;
- (void)setSettingEmitterPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)settingEmitterShape;
- (void)setSettingEmitterShape:(id)a0;
- (struct CGSize { double x0; double x1; })settingEmitterSize;
- (void)setSettingEmitterSize:(struct CGSize { double x0; double x1; })a0;
- (double)settingEmitterZPosition;
- (void)setSettingEmitterZPosition:(double)a0;
- (id)settingRenderMode;
- (void)setSettingRenderMode:(id)a0;
- (double)settingSeed;
- (void)setSettingSeed:(double)a0;

@end
