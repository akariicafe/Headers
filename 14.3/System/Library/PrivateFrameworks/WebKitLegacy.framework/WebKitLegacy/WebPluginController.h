@class NSMutableArray, NSString, NSMutableSet, WAKView, WebDataSource;

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {
    WAKView *_documentView;
    WebDataSource *_dataSource;
    NSMutableArray *_views;
    BOOL _started;
    NSMutableSet *_checksInProgress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addPlugInView:(id)a0;
+ (BOOL)isPlugInView:(id)a0;

- (id)webView;
- (void)setDataSource:(id)a0;
- (void)dealloc;
- (id)webFrame;
- (id)initWithDocumentView:(id)a0;
- (void)addPlugin:(id)a0;
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)a0;
- (void)stopOnePlugin:(id)a0;
- (void)stopOnePluginForPageCache:(id)a0;
- (void)destroyOnePlugin:(id)a0;
- (void)stopAllPlugins;
- (void)_cancelOutstandingChecks;
- (void)webPlugInContainerShowStatus:(id)a0;
- (void)pluginView:(id)a0 receivedResponse:(id)a1;
- (void)pluginView:(id)a0 receivedData:(id)a1;
- (void)pluginView:(id)a0 receivedError:(id)a1;
- (void)pluginViewFinishedLoading:(id)a0;
- (id)plugInViewWithArguments:(id)a0 fromPluginPackage:(id)a1;
- (BOOL)plugInsAreRunning;
- (id)superlayerForPluginView:(id)a0;
- (void)startAllPlugins;
- (void)stopPluginsForPageCache;
- (void)restorePluginsFromCache;
- (void)destroyPlugin:(id)a0;
- (void)destroyAllPlugins;
- (BOOL)processingUserGesture;
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)a0 inFrame:(id)a1 resultObject:(id)a2 selector:(SEL)a3;
- (void)webPlugInContainerLoadRequest:(id)a0 inFrame:(id)a1;
- (void)webPlugInContainerWillShowFullScreenForView:(id)a0;
- (void)webPlugInContainerDidHideFullScreenForView:(id)a0;
- (void)showStatus:(id)a0;
- (id)URLPolicyCheckReferrer;

@end
