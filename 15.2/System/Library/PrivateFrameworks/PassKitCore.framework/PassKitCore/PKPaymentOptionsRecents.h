@class CRRecentContactsLibrary, PKPaymentOptionsSynchronization, CNContact;
@protocol NSObject;

@interface PKPaymentOptionsRecents : NSObject {
    CNContact *_cachedMeContact;
    id<NSObject> _meContactDidChangeNotificationObserver;
    PKPaymentOptionsSynchronization *_optionsSynchronization;
}

@property (readonly, nonatomic) CNContact *meCard;
@property (nonatomic, getter=isMeCardCachingEnabled) BOOL meCardCachingEnabled;
@property (retain, nonatomic) CRRecentContactsLibrary *recentContactsLibrary;

+ (id)_coreRecentsKindForPreference:(id)a0;
+ (id)defaultInstance;

- (id)_defaultCRSearchQuery;
- (id)postalAddressMetadataForContact:(id)a0;
- (id)contactMetadataForContact:(id)a0 preference:(id)a1;
- (void)_addContactToKeychain:(id)a0 forPreference:(id)a1;
- (void)recentsForPreference:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)_contactFromRecent:(id)a0 preference:(id)a1;
- (void)_coreRecentsContactsForPreference:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)_contactsFromKeychainForPreference:(id)a0;
- (void)_deleteRecentContactsFromKeychainForPreference:(id)a0;
- (void)_deleteRecentContactFromKeychain:(id)a0 forPreference:(id)a1;
- (id)_postalAddressLabeledValueFromRecent:(id)a0;
- (void)_deleteRecentContactsFromKeychainForContactKey:(id)a0;
- (void)meCardEntriesForPreference:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)_labelsToPropertiesDictionaryForContact:(id)a0;
- (id)_meCardEntries:(id)a0 forContactKeys:(id)a1 labelsToProperties:(id)a2;
- (id)_meCardEntries:(id)a0 forContactKey:(id)a1 labelsToProperties:(id)a2;
- (void)_updateRecentsWithContactsFromContactInformation:(id)a0 currentKeychainContacts:(id)a1 forContactKey:(id)a2;
- (id)saveContactToCoreRecents:(id)a0 preference:(id)a1;
- (id)_keychainKeyFromContactKey:(id)a0;
- (void)deleteRecentsForPreference:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
- (void)deleteAllRecentsWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void)_setKeychainData:(id)a0 forKey:(id)a1;
- (id)_keychainDataForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)updateRecentsAndKeychainWithContactInformation:(id)a0;
- (void)dealloc;
- (void)deleteRecent:(id)a0;
- (id)recentsForPreference:(id)a0;
- (id)meCardEntriesForPreference:(id)a0;

@end
