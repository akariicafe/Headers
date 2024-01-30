@class NSString, NSDictionary, CNContact, PKPaymentOptionsSynchronization;

@interface PKPaymentOptionsDefaults : NSObject <PKPaymentOptionsSynchronizationDelegate, PKPaymentOptionsProtocol> {
    int _defaultsChangedNotifyToken;
    unsigned long long _postedNotificationCount;
    PKPaymentOptionsSynchronization *_optionsSynchronization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CNContact *defaultShippingAddress;
@property (readonly, nonatomic) NSDictionary *defaultBillingAddresses;
@property (retain, nonatomic) CNContact *defaultContactEmail;
@property (retain, nonatomic) CNContact *defaultContactPhone;
@property (retain, nonatomic) CNContact *defaultContactName;

+ (id)defaults;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)optionsSynchronizationDidChangeTo:(BOOL)a0;
- (void)_setKeychainData:(id)a0 forKey:(id)a1;
- (void)_registerForChangeNotifications;
- (void)_unregisterForChangeNotifications;
- (void)_deleteKeychainDataForKey:(id)a0 localOnly:(BOOL)a1;
- (id)_keychainDataForKey:(id)a0;
- (id)_contactForKeychainKey:(id)a0;
- (void)_setContact:(id)a0 property:(id)a1 forKeychainKey:(id)a2;
- (void)deleteDefaultShippingAddress;
- (void)_deleteKeychainDataForKey:(id)a0;
- (void)deleteAllDefaults;
- (id)_rawDefaultBillingAddresses;
- (id)defaultBillingAddressForPrimaryAccountIdentifier:(id)a0;
- (void)deleteDefaultContactPhone;
- (void)setDefaultBillingAddress:(id)a0 forPrimaryAccountIdentifier:(id)a1;
- (void)updateLastUpdatedDate:(id)a0 forPrimaryAccountIdentifier:(id)a1;
- (void)deleteDefaultContactEmail;
- (id)_lastUpdatedDatesForBillingAddresses;
- (void)_setContact:(id)a0 forKeychainKey:(id)a1;
- (void)deleteDefaultContactName;
- (void)_hardDeleteDefaultBillingAddress;
- (void)deleteAllLocalDefaults;
- (id)defaultBillingAddressForRemotePaymentInstrument:(id)a0;
- (void)setDefaultBillingAddress:(id)a0 forRemotePaymentInstrument:(id)a1;
- (void)_setRawDefaultBillingAddresses:(id)a0;
- (void)deleteDefaultBillingAddress:(id)a0;
- (void)deleteDefaultBillingAddressForPrimaryAccountIdentifier:(id)a0;
- (void)migrateToSyncable;
- (id)lastUpdatedDateForPrimaryAccountIdentifier:(id)a0;
- (void)deleteDefaultForContactKey:(id)a0;
- (id)defaultBillingAddressForPaymentPass:(id)a0;
- (void)setDefaultBillingAddress:(id)a0 forPaymentPass:(id)a1;

@end
