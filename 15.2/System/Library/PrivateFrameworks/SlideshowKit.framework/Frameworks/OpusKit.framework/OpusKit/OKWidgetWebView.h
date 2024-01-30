@class NSString, NSDictionary, UIWebView;

@interface OKWidgetWebView : OKWidgetView <OKCollectionProxyDataSource, OKWidgetWebViewProxyExports> {
    BOOL _scaleToFit;
    NSString *_webDidLoadActionScript;
}

@property (copy, nonatomic) NSString *urlText;
@property (copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) BOOL isFrameLoaded;
@property (copy, nonatomic) UIWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (BOOL)prepareForDisplay:(BOOL)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)layoutSubviews;
- (void)webViewDidFinishLoad:(id)a0;
- (id)initWithWidget:(id)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (BOOL)prepareForUnload:(BOOL)a0;
- (void)prepareForRefresh;
- (unsigned long long)countOfDictionaryProxy:(id)a0;
- (id)allKeysForDictionaryProxy:(id)a0;
- (id)dictionaryProxy:(id)a0 objectForKey:(id)a1;
- (void)reloadWebView;
- (id)settingOptions;
- (void)setSettingOptions:(id)a0;
- (id)settingUrlText;
- (void)setSettingUrlText:(id)a0;
- (BOOL)settingScaleToFit;
- (void)setSettingScaleToFit:(BOOL)a0;
- (void)setSettingWebDidLoadActionScript:(id)a0;

@end
