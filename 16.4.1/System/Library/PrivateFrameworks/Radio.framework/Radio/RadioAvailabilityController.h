@class NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface RadioAvailabilityController : NSObject <ICEnvironmentMonitorObserver, MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    NSObject<OS_dispatch_queue> *_restrictionLoadQueue;
    BOOL _hasSuccessfullyLoadedURLBag;
    BOOL _isRadioAvailable;
    NSNumber *_isRadioAvailableFromBag;
    BOOL _isRadioRestricted;
    NSNumber *_lastActiveAccountUniqueIdentifier;
}

@property (readonly, nonatomic) BOOL hasLoadedRadioAvailability;
@property (readonly, nonatomic, getter=isRadioAvailable) BOOL radioAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (BOOL)_calculateRadioRestricted;
- (void)getRadioAvailabilityWithCompletionHandler:(id /* block */)a0;
- (id)_currentStoreFrontIdentifier;
- (void)dealloc;
- (void)_reloadRadioBagAvailabilityWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void)_reloadRadioRestriction;
- (void)_updateRadioAvailabilityAllowingNotifications:(BOOL)a0;
- (id)_userDefaultsDomain;
- (void)_currentStoreFrontIdentifierWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_updateRadioAvailabilityWithStoreURLBag:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;

@end
