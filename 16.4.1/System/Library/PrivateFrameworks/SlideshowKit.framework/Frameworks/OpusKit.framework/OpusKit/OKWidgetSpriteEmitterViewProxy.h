@class SKView, NSString, SKTexture, SKEmitterNode;

@interface OKWidgetSpriteEmitterViewProxy : OKWidgetView <OKWidgetSpriteEmitterViewProxyExports> {
    SKView *_skView;
}

@property (copy, nonatomic) NSString *emitterResourceName;
@property (copy, nonatomic) NSString *particuleResourceName;
@property (retain, nonatomic) SKEmitterNode *emitterNode;
@property (retain, nonatomic) SKTexture *particuleTexture;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)initWithWidget:(id)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)layoutSubviews;
- (id)valueForUndefinedKey:(id)a0;
- (void)loadEmitterIfNeeded;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (void)setAntialiasing:(BOOL)a0;
- (void)setSettingBackgroundColor:(id)a0;
- (void)setSettingEmitterResource:(id)a0;
- (void)setSettingParticuleResource:(id)a0;
- (id)settingEmitterResource;
- (id)settingParticuleResource;
- (void)unloadEmitter;
- (void)updateEmitter;

@end
