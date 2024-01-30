@class NSString, NSDictionary, NSData, CALayer, OKWidgetMicaView, OKWidgetMicaViewProxy;

@interface OKWidgetMicaDocument : NSObject <OKSettingsSupport, NSCopying> {
    OKWidgetMicaView *_widgetMicaView;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *rootDictionary;
@property (retain, nonatomic) CALayer *rootLayer;
@property (retain, nonatomic) NSDictionary *publishedObjects;
@property (nonatomic) OKWidgetMicaViewProxy *widgetMicaView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithURL:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (id)publishedObjectWithName:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (id)publishedObjectNames;
- (double)documentWidth;
- (double)documentHeight;
- (void)applySettings:(id)a0 withResolution:(id)a1;
- (void)loadMicaDocument;
- (id)settingsForKey:(id)a0;

@end
