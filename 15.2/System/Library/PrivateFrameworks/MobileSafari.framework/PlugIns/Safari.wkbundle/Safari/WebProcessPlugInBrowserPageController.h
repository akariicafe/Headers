@class NSString, MeasurementControllerBase, _WKRemoteObjectInterface;
@protocol TouchIconFetcherObserver;

@interface WebProcessPlugInBrowserPageController : _SFWebProcessPlugInReaderEnabledPageController <PageLoadTestWebProcessController, TouchIconFetcherWebProcessController> {
    _WKRemoteObjectInterface *_pageLoadTestControllerInterface;
    _WKRemoteObjectInterface *_touchIconFetcherControllerInterface;
    MeasurementControllerBase *_pageLoadTestMeasurementController;
    BOOL _haveCheckedIfPageLoadTestIsEnabled;
    id<TouchIconFetcherObserver> _touchIconFetcherObserverProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webProcessPlugInBrowserContextController:(id)a0 globalObjectIsAvailableForFrame:(id)a1 inScriptWorld:(id)a2;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFailLoadWithErrorForFrame:(id)a1 error:(id)a2;
- (void)_logPageLoadStarted:(id)a0;
- (void)willDestroyBrowserContextController:(id)a0;
- (void)webProcessPlugInBrowserContextController:(id)a0 frame:(id)a1 didInitiateLoadForResource:(unsigned long long)a2 request:(id)a3;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFailProvisionalLoadWithErrorForFrame:(id)a1 error:(id)a2;
- (unsigned long long)webProcessPlugInBrowserContextControllerRenderingProgressEvents:(id)a0;
- (void)_setupTouchIconFetcherController;
- (void)webProcessPlugInBrowserContextController:(id)a0 frame:(id)a1 didFinishLoadForResource:(unsigned long long)a2;
- (id)initWithPlugIn:(id)a0 contextController:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didRemoveFrameFromHierarchy:(id)a1;
- (void)enablePageMemoryMeasurementCollection:(id)a0;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFirstVisuallyNonEmptyLayoutForFrame:(id)a1;
- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)a0 didHandleOnloadEventsForFrame:(id)a1;
- (void)fetchTouchIconURLs;
- (void)_setupPageLoadTestController;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishDocumentLoadForFrame:(id)a1;
- (void)_readPageLoadTestParameters;
- (void)webProcessPlugInBrowserContextController:(id)a0 renderingProgressDidChange:(unsigned long long)a1;
- (void)dealloc;
- (void)webProcessPlugInBrowserContextController:(id)a0 didStartProvisionalLoadForFrame:(id)a1;
- (void)_logPageLoadCompleted:(id)a0 withErrorCode:(long long)a1;
- (id)_touchIconFetcherObserverProxy;
- (void)webProcessPlugInBrowserContextController:(id)a0 didCommitLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 frame:(id)a1 didFailLoadForResource:(unsigned long long)a2 error:(id)a3;

@end
