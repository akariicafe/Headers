@class NSString, FBSDisplayConfiguration, BSServiceConnectionListener, NSSet, NSMutableDictionary, NSMutableArray, NSMutableSet, NSObject;
@protocol BNBannerSourceListenerDelegate, OS_dispatch_queue;

@interface BNBannerSourceListener : NSObject <BSServiceConnectionListenerDelegate, BNBannerSourceClientToHostInterface, BNBannerSourceListenerPresentableObserving, BSInvalidatable> {
    FBSDisplayConfiguration *_displayConfiguration;
    NSSet *_authorizedBundleIDs;
    BSServiceConnectionListener *_connectionListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    NSMutableSet *_unpreparedPresentables;
    NSMutableDictionary *_requesterIDsToPresentables;
}

@property (weak, nonatomic) id<BNBannerSourceListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_removeConnection:(id)a0;
- (void)_addConnection:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)_addPresentable:(id)a0;
- (void)_removePresentable:(id)a0;
- (BOOL)_isConnectingProcessAuthorized:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAuthorizedBundleIDs:(id)a0;
- (void)layoutDescriptionDidChange:(id)a0;
- (void)__layoutDescriptionWithReply:(id /* block */)a0;
- (void)__postPresentableWithSpecification:(id)a0 options:(id)a1 userInfo:(id)a2 reply:(id /* block */)a3;
- (void)__recommendSuspension:(id)a0 forReason:(id)a1 revokingCurrent:(id)a2 reply:(id /* block */)a3;
- (void)__revokePresentablesWithIdentification:(id)a0 withAnimation:(id)a1 reason:(id)a2 userInfo:(id)a3 reply:(id /* block */)a4;
- (id)initWithServiceDomain:(id)a0 displayConfiguration:(id)a1 authorizedBundleIDs:(id)a2;
- (id)_createSceneWithIdentifier:(id)a0 forProcess:(id)a1 preferredContentSize:(struct CGSize { double x0; double x1; })a2 contentOutsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 userInfo:(id)a4;
- (BOOL)_isPresentableWaitingToBeMadeReady:(id)a0;
- (void)_removeUnpreparedPresentable:(id)a0;
- (void)_addUnpreparedPresentable:(id)a0;
- (id)_removeUnpreparedPresentablesWithIdentification:(id)a0;
- (void)_removePresentableWithIdentification:(id)a0;
- (BOOL)_isPrototypeFeaturesEnabled;
- (void)_removePresentablesFromRequesterWithIdentifier:(id)a0 passingTest:(id /* block */)a1;
- (void)sceneDidInvalidateForBannerSourceListenerPresentable:(id)a0;

@end
