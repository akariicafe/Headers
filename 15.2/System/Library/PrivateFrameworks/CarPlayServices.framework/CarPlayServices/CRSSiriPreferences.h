@class CARObserverHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CRSSiriPreferences : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long cachedCarPlayAnnounceEnablementType;
@property (nonatomic) BOOL cachedAnnounceNotificationsInCarPlayTemporarilyDisabled;
@property (readonly, nonatomic) CARObserverHashTable *observers;
@property (nonatomic) long long carPlayAnnounceEnablementType;
@property (nonatomic) BOOL announceNotificationsInCarPlayTemporarilyDisabled;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;
- (void)_siriPreferencesDidChange;
- (void)_updateCarPlayAnnounceEnablementType:(long long)a0;
- (void)_updateAnnounceNotificationsInCarPlayTemporarilyDisabled:(BOOL)a0;

@end
