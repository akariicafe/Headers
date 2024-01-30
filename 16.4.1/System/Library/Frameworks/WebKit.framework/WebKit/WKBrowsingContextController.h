@class NSString, WKBrowsingContextHandle, NSURL, WKBackForwardList, _WKRemoteObjectRegistry, NSArray;
@protocol WKBrowsingContextLoadDelegate, WKBrowsingContextPolicyDelegate, WKBrowsingContextHistoryDelegate;

@interface WKBrowsingContextController : NSObject {
    struct WeakObjCPtr<id<WKBrowsingContextHistoryDelegate>> { id m_weakReference; } _historyDelegate;
    struct RefPtr<WebKit::WebPageProxy, WTF::RawPtrTraits<WebKit::WebPageProxy>, WTF::DefaultRefDerefTraits<WebKit::WebPageProxy>> { struct WebPageProxy *m_ptr; } _page;
    struct unique_ptr<WebKit::PageLoadStateObserver, std::default_delete<WebKit::PageLoadStateObserver>> { struct __compressed_pair<WebKit::PageLoadStateObserver *, std::default_delete<WebKit::PageLoadStateObserver>> { struct PageLoadStateObserver *__value_; } __ptr_; } _pageLoadStateObserver;
    struct WeakObjCPtr<id<WKBrowsingContextLoadDelegate>> { id m_weakReference; } _loadDelegate;
    struct WeakObjCPtr<id<WKBrowsingContextPolicyDelegate>> { id m_weakReference; } _policyDelegate;
}

@property (readonly) struct OpaqueWKPage { } *_pageRef;
@property (readonly) BOOL hasOnlySecureContent;
@property unsigned long long paginationMode;
@property BOOL paginationBehavesLikeColumns;
@property double pageLength;
@property double gapBetweenPages;
@property BOOL paginationLineGridEnabled;
@property (readonly) unsigned long long pageCount;
@property (readonly, nonatomic) WKBrowsingContextHandle *handle;
@property (readonly, nonatomic) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property (readonly, nonatomic) int processIdentifier;
@property (weak) id<WKBrowsingContextLoadDelegate> loadDelegate;
@property (weak) id<WKBrowsingContextPolicyDelegate> policyDelegate;
@property (weak) id<WKBrowsingContextHistoryDelegate> historyDelegate;
@property (copy) NSString *applicationNameForUserAgent;
@property (copy) NSString *customUserAgent;
@property (readonly) BOOL canGoForward;
@property (readonly) BOOL canGoBack;
@property (readonly) WKBackForwardList *backForwardList;
@property (readonly, getter=isLoading) BOOL loading;
@property (readonly) NSURL *activeURL;
@property (readonly) NSURL *provisionalURL;
@property (readonly) NSURL *committedURL;
@property (readonly) NSURL *unreachableURL;
@property (readonly) double estimatedProgress;
@property (readonly) NSString *title;
@property (readonly) NSArray *certificateChain;
@property double textZoom;
@property double pageZoom;

+ (id)_browsingContextControllerForPageRef:(struct OpaqueWKPage { } *)a0;
+ (id)customSchemes;
+ (void)registerSchemeForCustomProtocol:(id)a0;
+ (void)unregisterSchemeForCustomProtocol:(id)a0;

- (void)goBack;
- (void)stopLoading;
- (void)goForward;
- (id).cxx_construct;
- (void)goToBackForwardListItem:(id)a0;
- (void)reloadFromOrigin;
- (void)reload;
- (void)dealloc;
- (void).cxx_destruct;
- (void)loadAlternateHTMLString:(id)a0 baseURL:(id)a1 forUnreachableURL:(id)a2;
- (void)loadData:(id)a0 MIMEType:(id)a1 textEncodingName:(id)a2 baseURL:(id)a3;
- (void)loadHTMLString:(id)a0 baseURL:(id)a1;
- (void)loadRequest:(id)a0;
- (id)_initWithPageRef:(struct OpaqueWKPage { } *)a0;
- (BOOL)_webProcessIsResponsive;
- (void)loadData:(id)a0 MIMEType:(id)a1 textEncodingName:(id)a2 baseURL:(id)a3 userData:(id)a4;
- (void)loadFileURL:(id)a0 restrictToFilesWithin:(id)a1;
- (void)loadFileURL:(id)a0 restrictToFilesWithin:(id)a1 userData:(id)a2;
- (void)loadHTMLString:(id)a0 baseURL:(id)a1 userData:(id)a2;
- (void)loadRequest:(id)a0 userData:(id)a1;

@end
