@class AAUIServerUIHookHandler, NSString, NSMutableDictionary, FARequestConfigurator, NSDictionary, FACircleContext, NSURLRequest, RUIPage, FAProfilePictureStore;
@protocol FACircleRemoteUIDelegateDelegate;

@interface FACircleRemoteUIDelegate : NSObject <RemoteUIControllerDelegate> {
    FARequestConfigurator *_requestConfigurator;
    NSDictionary *_cachedServerInfo;
    AAUIServerUIHookHandler *_serverHookHandler;
    NSURLRequest *_cachedRequest;
    NSMutableDictionary *_objectModelDecorators;
    FAProfilePictureStore *_familyPictureStore;
    NSDictionary *_dismissInfo;
    BOOL _isReplacing;
    RUIPage *_cachedPage;
}

@property (readonly, nonatomic) FACircleContext *context;
@property (weak) id<FACircleRemoteUIDelegateDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (void)remoteUIController:(id)a0 didFinishLoadWithError:(id)a1;
- (void)remoteUIController:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)remoteUIController:(id)a0 didPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void)remoteUIController:(id)a0 didRefreshObjectModel:(id)a1;
- (void)remoteUIController:(id)a0 didRemoveObjectModel:(id)a1;
- (void)remoteUIController:(id)a0 loadResourcesForObjectModel:(id)a1 completion:(id /* block */)a2;
- (void)remoteUIController:(id)a0 willPresentObjectModel:(id)a1 modally:(BOOL)a2;
- (void)remoteUIController:(id)a0 didDismissModalNavigationWithObjectModels:(id)a1;
- (void)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)_broadcastFamilyDidChangeNotification;
- (void)_broadcastServicesDidChangeNotification;
- (void)_setUserInteractionForRUIPage:(id)a0 enabled:(BOOL)a1;
- (void)_reportRequestFailureWithResponse:(id)a0;
- (void)_notifyDelegateOfCompletionWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_handleObjectModelChangeForController:(id)a0 objectModel:(id)a1 isModal:(BOOL)a2;
- (id)initWithContext:(id)a0 serverHookHandler:(id)a1 pictureStore:(id)a2;

@end
