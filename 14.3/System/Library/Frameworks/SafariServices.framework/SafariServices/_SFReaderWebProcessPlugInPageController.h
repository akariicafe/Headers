@class _SFWebProcessPlugInReaderEnabledPageController, WKWebProcessPlugInScriptWorld;

@interface _SFReaderWebProcessPlugInPageController : _SFWebProcessPlugInPageController {
    struct unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::__1::default_delete<SafariServices::WebProcessPlugInReaderJSController> > { struct __compressed_pair<SafariServices::WebProcessPlugInReaderJSController *, std::__1::default_delete<SafariServices::WebProcessPlugInReaderJSController> > { struct WebProcessPlugInReaderJSController *__value_; } __ptr_; } _readerJSController;
    WKWebProcessPlugInScriptWorld *_isolatedWorldForNextPageDetection;
}

@property (weak, nonatomic) _SFWebProcessPlugInReaderEnabledPageController *originalPageController;

+ (id)readerPageControllerForContextHandle:(id)a0;

- (void)loadNewArticle;
- (void)setConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)willDestroyBrowserContextController:(id)a0;
- (void)webProcessPlugInBrowserContextController:(id)a0 globalObjectIsAvailableForFrame:(id)a1 inScriptWorld:(id)a2;
- (id)initWithPlugIn:(id)a0 contextController:(id)a1;
- (struct OpaqueJSValue { } *)originalArticleFinder;
- (id).cxx_construct;
- (void)_initializeReaderJSControllerForFrame:(id)a0;
- (void)reloadArticle;
- (id)isolatedWorldForNextPageDetection;
- (id)collectReaderContentFromPrintAndMailingFrame;
- (id)printingMailingFrame;
- (void)setReaderIsActive:(BOOL)a0;

@end
