@protocol WBSTouchIconObserver;

@interface WBSTouchIconWebProcessPlugInPageController : WBSWebProcessPlugInPageController {
    id<WBSTouchIconObserver> _touchIconObserver;
    unsigned long long _mainFrameMainResourceId;
    BOOL _didRecieveDidHandleOnloadEventsForFrameCallback;
    BOOL _shouldExtractIconsWhenRecievingDidHandleOnloadEventsForFrameCallback;
}

@property (readonly, nonatomic) id<WBSTouchIconObserver> touchIconObserver;

- (id)webProcessPlugInBrowserContextController:(id)a0 frame:(id)a1 willSendRequestForResource:(unsigned long long)a2 request:(id)a3 redirectResponse:(id)a4;
- (void)webProcessPlugInBrowserContextController:(id)a0 frame:(id)a1 didInitiateLoadForResource:(unsigned long long)a2 request:(id)a3 pageIsProvisionallyLoading:(BOOL)a4;
- (void).cxx_destruct;
- (void)webProcessPlugInBrowserContextController:(id)a0 didFinishDocumentLoadForFrame:(id)a1;
- (void)webProcessPlugInBrowserContextController:(id)a0 didHandleOnloadEventsForFrame:(id)a1;
- (id)_extractTouchIconURLsIncludingDefaultURLs:(BOOL)a0 didExtractNonDefaultIconURLs:(BOOL *)a1;
- (id)_extractFaviconURLsIncludingDefaultURLs:(BOOL)a0 didExtractNonDefaultIconURLs:(BOOL *)a1;

@end
