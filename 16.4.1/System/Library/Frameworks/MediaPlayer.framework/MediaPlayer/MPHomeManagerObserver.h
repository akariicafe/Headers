@class HMUser, HMHome, NSString, HMAccessory, MPHomeUserMonitor, NSSet, NSMutableDictionary, NSObject, HMHomeManager;
@protocol OS_dispatch_queue, MPHomeManagerObserverDelegate;

@interface MPHomeManagerObserver : NSObject <HMHomeManagerDelegatePrivate, HMHomeDelegate, HMHomeDelegatePrivate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    HMHomeManager *_homeManager;
    HMHome *_currentHome;
    HMUser *_currentUser;
    NSSet *_homeUsers;
    NSMutableDictionary *_userMonitorMap;
    BOOL _soundCheckCachedValue;
    BOOL _setupDidComplete;
    unsigned long long _homekitInitSignpostId;
}

@property (weak, nonatomic) id<MPHomeManagerObserverDelegate> delegate;
@property (readonly, nonatomic) MPHomeUserMonitor *monitorForCurrentUser;
@property (nonatomic, getter=isSoundCheckEnabled) BOOL soundCheckEnabled;
@property (readonly, nonatomic) BOOL hasCurrentUser;
@property (readonly, nonatomic) BOOL hasCurrentHome;
@property (readonly, nonatomic) BOOL hasCurrentAccessory;
@property (readonly, nonatomic) HMUser *currentUser;
@property (readonly, nonatomic) HMHome *currentHome;
@property (readonly, nonatomic) HMAccessory *currentAccessory;
@property (readonly, nonatomic) BOOL setupDidComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedObserver;

- (void)home:(id)a0 didAddUser:(id)a1;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)home:(id)a0 didRemoveUser:(id)a1;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)a0;
- (void)_update;
- (void)homeManager:(id)a0 didUpdateStatus:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)homeDidUpdateSoundCheck:(id)a0;
- (void)homeManagerDidRemoveCurrentAccessory:(id)a0;
- (void)homeManagerDidUpdateCurrentHome:(id)a0;
- (void)homeManagerDidUpdatePrimaryHome:(id)a0;
- (void)_usersDidChange;
- (id)userMonitorWithHomeIdentifiers:(id)a0;
- (void)_currentHomeDidChange;
- (void)_currentUserDidChange;
- (void)_soundCheckDidChange;
- (void)_updateAsyncOnQueue;
- (void)_updateSoundCheck;
- (id)_userMonitorWithHomeIdentifiers:(id)a0;
- (id)homeAccesssoryWithRouteID:(id)a0;
- (id)userMonitorWithHomeIdentifier:(id)a0;

@end
