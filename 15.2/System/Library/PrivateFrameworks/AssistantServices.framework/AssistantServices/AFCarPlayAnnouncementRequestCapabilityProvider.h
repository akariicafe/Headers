@class CARSessionStatus, NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface AFCarPlayAnnouncementRequestCapabilityProvider : NSObject <CARSessionObserving, AFAnnouncementRequestCapabilityProviding> {
    CARSessionStatus *_carSessionStatus;
    NSObject<OS_dispatch_queue> *_providerQueue;
    BOOL _isCarPlayConnected;
    unsigned long long _lastKnownAvailableAnnouncementRequestTypes;
    unsigned long long _lastKnownEligibleAnnouncementRequestTypes;
    NSHashTable *_delegates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;
+ (id)provider;
+ (long long)platform;
+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;

- (void)addDelegate:(id)a0;
- (void)sessionDidDisconnect:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)sessionDidConnect:(id)a0;
- (void)_notifyObserversOfUpdatedAvailableAnnouncementRequestTypes:(unsigned long long)a0;
- (unsigned long long)_requestTypesForCarPlayAvailableOrConnected:(BOOL)a0;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)_updateForCarPlaySessionConnected:(BOOL)a0;
- (void)_setLastKnownAvailableAnnouncementRequestTypesAndNotifyObservers:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_isCarPlayConnectedWithCompletion:(id /* block */)a0;
- (void)_availableAnnouncementRequestTypesForCarPlayConnectionWithCompletion:(id /* block */)a0;
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;
- (void)isCarPlayConnectedWithCompletion:(id /* block */)a0;
- (void)updateForCarPlaySessionConnected:(BOOL)a0;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)a0;

@end
