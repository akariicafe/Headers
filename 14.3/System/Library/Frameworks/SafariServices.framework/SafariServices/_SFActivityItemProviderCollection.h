@class _SFActivityItemProvider, WKWebView, _SFPrintActivityItemProvider;

@interface _SFActivityItemProviderCollection : NSObject

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) _SFActivityItemProvider *standaloneImageProvider;
@property (readonly, nonatomic) _SFActivityItemProvider *webArchiveProvider;
@property (nonatomic) BOOL displayingDigitalHealthLockoutView;
@property (nonatomic) BOOL displayingStandaloneImage;
@property (nonatomic) BOOL displayingStandaloneMedia;
@property (retain, nonatomic) _SFActivityItemProvider *linkProvider;
@property (retain, nonatomic) _SFPrintActivityItemProvider *printProvider;
@property (retain, nonatomic) _SFActivityItemProvider *javaScriptExtensionProvider;
@property (retain, nonatomic) _SFActivityItemProvider *downloadProvider;

- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (id)activityItemProvidersWithCustomizationController:(id)a0;

@end
