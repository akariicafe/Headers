@class CARObserverHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface CRSSiriPreferences : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long cachedCarPlayAnnounceEnablementType;
@property (nonatomic) BOOL cachedAnnounceNotificationsInCarPlayTemporarilyDisabled;
@property (nonatomic) BOOL cachedAutoSendInCarPlayEnabled;
@property (nonatomic) BOOL cachedAutoSendInHeadphonesEnabled;
@property (nonatomic) BOOL cachedMainAutoSendEnabled;
@property (readonly, nonatomic) CARObserverHashTable *observers;
@property (nonatomic) long long carPlayAnnounceEnablementType;
@property (nonatomic) BOOL announceNotificationsInCarPlayTemporarilyDisabled;
@property (nonatomic) BOOL autoSendInCarPlayEnabled;
@property (nonatomic) BOOL autoSendInHeadphonesEnabled;
@property (nonatomic) BOOL mainAutoSendEnabled;

- (void)addObserver:(id)a0;
- (void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_siriPreferencesDidChange;
- (void)_updateAnnounceNotificationsInCarPlayTemporarilyDisabled:(BOOL)a0;
- (void)_updateAutoSendInCarPlayEnabled:(BOOL)a0;
- (void)_updateAutoSendInHeadphonesEnabled:(BOOL)a0;
- (void)_updateCarPlayAnnounceEnablementType:(long long)a0;
- (void)_updateMainAutoSendEnabled:(BOOL)a0;

@end
