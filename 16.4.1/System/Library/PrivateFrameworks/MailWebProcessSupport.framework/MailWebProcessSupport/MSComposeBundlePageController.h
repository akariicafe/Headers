@class NSString, WKWebProcessPlugInBrowserContextController, JSContext, EFProcessTransaction, JSValue, NSMutableArray;
@protocol MSRichLinkGeneration, WKWebProcessPlugIn, MSComposeBodyFieldObserver;

@interface MSComposeBundlePageController : NSObject <WKWebProcessPlugInLoadDelegate, MSBundlePageController, MSComposeBodyFieldController> {
    unsigned long long _performOnPageSuspendCount;
    NSMutableArray *_blocksToPerformOnPage;
    id<MSRichLinkGeneration> _linkGeneratorProxy;
    EFProcessTransaction *_webContentProcessTransaction;
}

@property (readonly, weak, nonatomic) id<WKWebProcessPlugIn> plugIn;
@property (readonly, nonatomic) WKWebProcessPlugInBrowserContextController *controller;
@property (readonly, nonatomic) JSContext *jsContext;
@property (readonly, nonatomic) JSValue *jsBodyField;
@property (readonly, nonatomic) id<MSComposeBodyFieldObserver> observerProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishDocumentLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 globalObjectIsAvailableForFrame:(id)a1 inScriptWorld:(id)a2;
- (id)initWithPlugIn:(id)a0 contextController:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)webProcessPlugInBrowserContextController:(id)a0 frame:(id)a1 willSendRequestForResource:(unsigned long long)a2 request:(id)a3 redirectResponse:(id)a4;
- (void)changeQuoteLevelBy:(long long)a0 withUndoActionName:(id)a1;
- (void)insertRichLinkWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)makeRichLinkFromSelection;
- (void)removeRichLinkFromSelection;
- (void)stripCustomBodyIdentifiers;
- (id)willSendRequest:(id)a0;
- (id)createRichLink:(id)a0;
- (id)_linkGeneratorProxy;
- (void)initializeBodyField:(id)a0;
- (void)initializeGlobalObject;
- (void)performBodyFieldMethodOnPage:(id)a0 withArguments:(id)a1;
- (void)performOnPage:(id /* block */)a0;
- (void)resumePerformOnPage;
- (void)suspendPerformOnPage;

@end
