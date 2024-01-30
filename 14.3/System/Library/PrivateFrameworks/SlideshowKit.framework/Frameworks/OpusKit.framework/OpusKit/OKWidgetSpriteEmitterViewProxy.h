@class SKView, NSString, SKTexture, SKEmitterNode;

@interface OKWidgetSpriteEmitterViewProxy : OKWidgetView <OKWidgetSpriteEmitterViewProxyExports> {
    SKView *_skView;
}

@property (copy, nonatomic) NSString *emitterResourceName;
@property (copy, nonatomic) NSString *particuleResourceName;
@property (retain, nonatomic) SKEmitterNode *emitterNode;
@property (retain, nonatomic) SKTexture *particuleTexture;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithWidget:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)layoutSubviews;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (void)setSettingBackgroundColor:(id)a0;
- (void)setAntialiasing:(BOOL)a0;
- (void)unloadEmitter;
- (void)updateEmitter;
- (void)loadEmitterIfNeeded;
- (id)settingParticuleResource;
- (void)setSettingParticuleResource:(id)a0;
- (id)settingEmitterResource;
- (void)setSettingEmitterResource:(id)a0;

@end
