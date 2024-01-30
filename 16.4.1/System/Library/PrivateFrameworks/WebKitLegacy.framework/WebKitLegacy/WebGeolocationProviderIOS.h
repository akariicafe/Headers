@class NSString, m_tableForLLDB;

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider> {
    struct RetainPtr<WebGeolocationCoreLocationProvider> { void *m_ptr; } _coreLocationProvider;
    struct RetainPtr<_WebCoreLocationUpdateThreadingProxy> { void *m_ptr; } _coreLocationUpdateListenerProxy;
    BOOL _enableHighAccuracy;
    BOOL _isSuspended;
    BOOL _shouldResetOnResume;
    struct HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<WebView>>, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::HashTableTraits> { struct HashTable<WTF::RetainPtr<WebView>, WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>>, WTF::DefaultHash<WTF::RetainPtr<WebView>>, WTF::HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener>>>::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<WebView>>> { union { void *m_table; unsigned int *m_tableForLLDB; } ; } m_impl; } _webViewsWaitingForCoreLocationAuthorization;
    struct HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits> { struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *>> { union { m_tableForLLDB **m_table; unsigned int *x0; } ; } m_impl; } _pendingInitialPositionWebView;
    struct HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits> { struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *>> { union { m_tableForLLDB **m_table; unsigned int *x0; } ; } m_impl; } _registeredWebViews;
    struct HashSet<WebView *, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTableTraits> { struct HashTable<WebView *, WebView *, WTF::IdentityExtractor, WTF::DefaultHash<WebView *>, WTF::HashTraits<WebView *>, WTF::HashTraits<WebView *>> { union { m_tableForLLDB **m_table; unsigned int *x0; } ; } m_impl; } _trackedWebViews;
    struct RetainPtr<NSTimer> { void *m_ptr; } _sendLastPositionAsynchronouslyTimer;
    struct RetainPtr<WebGeolocationPosition> { void *m_ptr; } _lastPosition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedGeolocationProvider;

- (id).cxx_construct;
- (void)suspend;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)errorOccurred:(id)a0;
- (void)setEnableHighAccuracy:(BOOL)a0;
- (void)geolocationAuthorizationGranted;
- (void)geolocationAuthorizationDenied;
- (void)positionChanged:(id)a0;
- (void)resetGeolocation;
- (void)_handlePendingInitialPosition:(id)a0;
- (void)initializeGeolocationForWebView:(id)a0 listener:(id)a1;
- (id)lastPosition;
- (void)registerWebView:(id)a0;
- (void)stopTrackingWebView:(id)a0;
- (void)unregisterWebView:(id)a0;

@end
