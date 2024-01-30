@class NSArray, NSMutableDictionary, NSHashTable, NPSManager, CNCoalescingTimer, NSUserDefaults;

@interface TCSContacts : NSObject {
    NSHashTable *_observers;
    NPSManager *_npsManager;
    CNCoalescingTimer *_allowlistSaveTimer;
    int _prefSyncToken;
    int _demoResetToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _allowlistLock;
}

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) BOOL shouldObserveAllowlistDefaultChanges;
@property (retain, nonatomic) NSMutableDictionary *allowlist;
@property (retain, nonatomic) NSArray *destinations;

+ (id)canonicalDestinationsForContact:(id)a0;
+ (id)_canonicalDestinationForString:(id)a0;
+ (id)_safeContactDetailStringForLogging:(id)a0;
+ (id)_unifiedContactWithIdentifier:(id)a0 orDestination:(id)a1 usingContactStore:(id)a2 keysToFetch:(id)a3;
+ (BOOL)_isUnknownContact:(id)a0 equalToUnknownContact:(id)a1;
+ (id)_unifiedMeContactFromContactStore:(id)a0 keysToFetch:(id)a1;
+ (id)_tinCanUserNotificationCenter;
+ (id)validatedAllowlistFromDictionary:(id)a0;
+ (id)_destinationsFromAllowlistDictionary:(id)a0 onlyAccepted:(BOOL)a1;
+ (id)_pauseCharacterSet;
+ (id)_unknownContactWithDestination:(id)a0;
+ (id)_canonicalPhoneNumberFromCNPhoneNumber:(id)a0;
+ (id)_canonicalPhoneNumberFromPhoneNumberString:(id)a0;
+ (BOOL)_contact:(id)a0 hasKeysForFormatterStye:(long long)a1;
+ (id)_firstPhoneNumberOrEmailAddressFromContact:(id)a0 formatPhoneNumber:(BOOL)a1;
+ (void)dismissInvitationNotificationsFromContact:(id)a0;
+ (BOOL)_isContact:(id)a0 similarToContact:(id)a1;
+ (id)_safeContactNameStringForLogging:(id)a0 handle:(id)a1;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)addDestinations:(id)a0;
- (void)_handleDeviceFirstUnlock;
- (BOOL)isDestinationAccepted:(id)a0;
- (BOOL)isDestinationAnInviter:(id)a0;
- (void)removeDestinations:(id)a0;
- (long long)stateForContact:(id)a0;
- (BOOL)isContactAnInviter:(id)a0;
- (BOOL)isContactAccepted:(id)a0;
- (void)_loadDataFromDefaults;
- (void)_saveAllowlist;
- (void)_handleContactsPrefSync;
- (void)_addDestinations:(id)a0 asType:(long long)a1;
- (id)_removeDestinationFromAllowlist:(id)a0;
- (BOOL)_generateDestinationsFromAllowlist;
- (void)_notifyObserversDestinationsChanged;
- (void)_notifyObserversRecencyChanged;
- (void)setDestinationAsAccepted:(id)a0;
- (void)_notifyObserversContactBecameAccepted:(id)a0;
- (void)_didInitiateCallToDestination:(id)a0 date:(id)a1;
- (void)_didReceiveCallFromDestination:(id)a0 date:(id)a1;
- (id)mostRecentCallDateForDestination:(id)a0;
- (id)mostRecentCallDateForContact:(id)a0;
- (BOOL)contactSupportsTinCan:(id)a0;
- (void)_reloadAllowlist;
- (BOOL)_loadAllowlistFromDefaults;
- (void)_logDestinations;
- (BOOL)_didIncomingOutgoingOrSupportChange:(id)a0;
- (BOOL)_shouldHandleResetStoreDemoContent;
- (void)addDestinationsForInviter:(id)a0;
- (void)setContact:(id)a0 supportsTinCan:(BOOL)a1;
- (void)setContactAsAccepted:(id)a0;
- (void)didInitiateCallToContact:(id)a0 date:(id)a1;
- (void)didReceiveCallFromContact:(id)a0 date:(id)a1;
- (id)dateAddedForDestination:(id)a0;
- (void)_resetStoreDemoContent;
- (void)_deleteAllowlist;

@end
