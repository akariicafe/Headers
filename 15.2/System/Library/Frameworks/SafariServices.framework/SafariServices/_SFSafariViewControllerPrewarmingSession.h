@class NSString, SFBrowserRemoteViewController, _UIAsyncInvocation, NSHashTable, SFQueueingServiceViewControllerProxy;
@protocol SFServiceViewControllerProtocol;

@interface _SFSafariViewControllerPrewarmingSession : NSObject <SFQueueingServiceViewControllerProxyDelegate, SFBrowserRemoteViewControllerDelegate> {
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *_serviceProxy;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    NSHashTable *_tokens;
    BOOL _suspended;
}

@property (class, readonly, nonatomic) _SFSafariViewControllerPrewarmingSession *sharedSession;
@property (class, readonly, nonatomic) _SFSafariViewControllerPrewarmingSession *sharedSessionIfExists;

@property (readonly, nonatomic) SFBrowserRemoteViewController *remoteViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedSessionCreateIfNeeded:(BOOL)a0;

- (void)_suspend;
- (void)_resume;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_connectToService;
- (void)restart;
- (void)remoteViewControllerWillDismiss:(id)a0;
- (void)remoteViewController:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (void)tokenWithIDDidInvalidate:(unsigned long long)a0;
- (void)remoteViewController:(id)a0 hostApplicationOpenURL:(id)a1;
- (void)serviceProxyWillQueueInvocation:(id)a0;
- (BOOL)_hasValidTokens;
- (void)_disconnectFromService;
- (id)_validTokens;
- (void)remoteViewController:(id)a0 didFinishInitialLoad:(BOOL)a1;
- (void)remoteViewControllerDidLoadWebView:(id)a0;
- (void)remoteViewController:(id)a0 fetchActivityViewControllerInfoForURL:(id)a1 title:(id)a2;
- (void)remoteViewController:(id)a0 executeCustomActivityProxyID:(id)a1;
- (void)remoteViewController:(id)a0 setSwipeGestureEnabled:(BOOL)a1;
- (void)remoteViewController:(id)a0 initialLoadDidRedirectToURL:(id)a1;
- (id)prewarmConnectionsToURLs:(id)a0;

@end
