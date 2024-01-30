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

- (void)optionsSynchronizationDidChangeTo:(BOOL)a0;
- (void)deleteAllDefaults;
- (void)_registerForChangeNotifications;
- (void)_unregisterForChangeNotifications;
- (void)_deleteKeychainDataForKey:(id)a0 localOnly:(BOOL)a1;
- (void)_setKeychainData:(id)a0 forKey:(id)a1;
- (id)_keychainDataForKey:(id)a0;
- (id)_contactForKeychainKey:(id)a0;
- (void)_setContact:(id)a0 property:(id)a1 forKeychainKey:(id)a2;
- (void)deleteDefaultShippingAddress;
- (void)_deleteKeychainDataForKey:(id)a0;
- (id)_rawDefaultBillingAddresses;
- (id)defaultBillingAddressForPrimaryAccountIdentifier:(id)a0;
- (void)setDefaultBillingAddress:(id)a0 forPrimaryAccountIdentifier:(id)a1;
- (void)updateLastUpdatedDate:(id)a0 forPrimaryAccountIdentifier:(id)a1;
- (id)_lastUpdatedDatesForBillingAddresses;
- (void)deleteDefaultContactEmail;
- (void)deleteDefaultContactPhone;
- (void)_setContact:(id)a0 forKeychainKey:(id)a1;
- (void)deleteDefaultContactName;
- (void)_hardDeleteDefaultBillingAddress;
- (id)defaultBillingAddressForRemotePaymentInstrument:(id)a0;
- (void)setDefaultBillingAddress:(id)a0 forRemotePaymentInstrument:(id)a1;
- (void)_setRawDefaultBillingAddresses:(id)a0;
- (void)deleteDefaultBillingAddress:(id)a0;
- (void)deleteDefaultBillingAddressForPrimaryAccountIdentifier:(id)a0;
- (id)lastUpdatedDateForPrimaryAccountIdentifier:(id)a0;
- (void)deleteAllLocalDefaults;
- (void)deleteDefaultForContactKey:(id)a0;
- (void)migrateToSyncable;
- (id)defaultBillingAddressForPaymentPass:(id)a0;
- (void)setDefaultBillingAddress:(id)a0 forPaymentPass:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
