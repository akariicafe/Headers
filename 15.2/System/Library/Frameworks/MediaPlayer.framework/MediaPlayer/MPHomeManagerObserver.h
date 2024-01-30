@class HMUser, HMHome, NSString, HMAccessory, MPHomeUserMonitor, NSSet, NSMutableDictionary, NSObject, HMHomeManager;
@protocol OS_dispatch_queue, MPHomeManagerObserverDelegate;

@interface MPHomeManagerObserver : NSObject <HMHomeManagerDelegatePrivate, HMHomeDelegatePrivate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    HMHomeManager *_homeManager;
    HMHome *_currentHome;
    HMUser *_currentUser;
    NSSet *_homeUsers;
    NSMutableDictionary *_userMonitorMap;
    BOOL _soundCheckCachedValue;
    BOOL _setupDidComplete;
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

- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)homeManagerDidUpdatePrimaryHome:(id)a0;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_usersDidChange;
- (void)homeDidUpdateSoundCheck:(id)a0;
- (void)homeManagerDidUpdateCurrentHome:(id)a0;
- (void)homeManagerDidRemoveCurrentAccessory:(id)a0;
- (void)_updateSoundCheck;
- (id)userMonitorWithHomeIdentifier:(id)a0;
- (id)userMonitorWithHomeIdentifiers:(id)a0;
- (id)homeAccesssoryWithRouteID:(id)a0;
- (id)_userMonitorWithHomeIdentifiers:(id)a0;
- (void)_updateAsyncOnQueue;
- (void)_currentHomeDidChange;
- (void)_currentUserDidChange;
- (void)_soundCheckDidChange;
- (void)_update;
- (void)homeManager:(id)a0 didUpdateStatus:(unsigned long long)a1;

@end
