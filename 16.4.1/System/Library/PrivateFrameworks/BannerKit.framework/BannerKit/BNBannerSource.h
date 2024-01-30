@class NSString, NSMutableDictionary, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue, BNBannerSourceDelegate, BNBannerClientContainer;

@interface BNBannerSource : NSObject <BNBannerSourceHostToClientInterface, BNBannerSceneComponentProviderDelegate, BNBannerClientContainerDelegate, BNBannerSourceProvidingPrivate, BNPresentableObserving, BNBannerSourceProviding> {
    NSString *_machName;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnection *_connection;
    NSMutableDictionary *_uniqueIDsToContexts;
    id<BNBannerClientContainer> _bannerClientContainerDeferringFocus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long destination;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (weak, nonatomic) id<BNBannerSourceDelegate> delegate;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (void)initialize;
+ (void)_invalidateBannerSource:(id)a0;
+ (id)bannerSourceForDestination:(long long)a0 forRequesterIdentifier:(id)a1;

- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (id)revokePresentableWithIdentification:(id)a0 reason:(id)a1 animated:(BOOL)a2 userInfo:(id)a3 error:(out id *)a4;
- (id)_revokePresentableWithIdentification:(id)a0 reason:(id)a1 animated:(id)a2 userInfo:(id)a3 error:(out id *)a4;
- (id)initWithDestination:(long long)a0 andRequesterIdentifier:(id)a1;
- (id)revokeAllPresentablesWithReason:(id)a0 userInfo:(id)a1 error:(out id *)a2;
- (BOOL)_isValidPresentable:(id)a0 errorDescription:(id *)a1;
- (void)_addPresentableContext:(id)a0;
- (id)_presentableForUniqueIdentifier:(id)a0;
- (id)layoutDescriptionWithError:(out id *)a0;
- (BOOL)postPresentable:(id)a0 options:(unsigned long long)a1 userInfo:(id)a2 error:(out id *)a3;
- (id)keyWindowForScreen:(id)a0;
- (BOOL)setSuspended:(BOOL)a0 forReason:(id)a1 revokingCurrent:(BOOL)a2 error:(out id *)a3;
- (void)dealloc;
- (id)_presentableContextForPresentableWithUniqueIdentifier:(id)a0;
- (void)_removePresentable:(id)a0 reason:(id)a1;
- (void)_removePresentableContextForPresentableWithUniqueIdentifier:(id)a0 reason:(id)a1;
- (BOOL)revokePresentableWithRequestIdentifier:(id)a0 animated:(BOOL)a1 reason:(id)a2 userInfo:(id)a3 error:(out id *)a4;
- (id)initWithMachName:(id)a0 andRequesterIdentifier:(id)a1;
- (BOOL)bannerClientContainerShouldDeferFocus:(id)a0;
- (void)_invalidateConnection;
- (void)bannerClientContainerStoppedDeferringFocus:(id)a0;
- (id)_activeConnectionWithError:(out id *)a0;
- (void)invalidate;
- (void)_removePresentableWithUniqueIdentifier:(id)a0 reason:(id)a1;
- (id)containerViewControllerForBannerSceneComponentProvider:(id)a0;
- (id)revokePresentableWithRequestIdentifier:(id)a0 reason:(id)a1 animated:(BOOL)a2 userInfo:(id)a3 error:(out id *)a4;
- (void).cxx_destruct;
- (void)sceneWillInvalidateForBannerSceneComponentProvider:(id)a0;

@end
