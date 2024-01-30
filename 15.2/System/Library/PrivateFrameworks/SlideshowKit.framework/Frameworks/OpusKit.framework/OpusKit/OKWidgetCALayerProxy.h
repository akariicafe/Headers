@class CALayer, NSString, OKWidgetMicaDocument;

@interface OKWidgetCALayerProxy : NSObject <OKSettingsSupport> {
    OKWidgetMicaDocument *_widgetMicaDocument;
}

@property (readonly, retain, nonatomic) CALayer *layer;
@property (nonatomic) OKWidgetMicaDocument *widgetMicaDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;
+ (id)proxyForLayer:(id)a0;

- (id)initWithLayer:(id)a0;
- (id)init;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (void)setSettingContents:(id)a0;

@end
