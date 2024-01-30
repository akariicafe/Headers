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

+ (id)proxyForLayer:(id)a0;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (void)setSettingContents:(id)a0;
- (id)initWithLayer:(id)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (id)init;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;

@end
