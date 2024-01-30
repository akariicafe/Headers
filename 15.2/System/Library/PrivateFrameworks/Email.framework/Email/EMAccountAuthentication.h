@protocol EDAccountFactory;

@interface EMAccountAuthentication : NSObject

@property (readonly, nonatomic) id<EDAccountFactory> accountFactory;

+ (id)log;

- (void).cxx_destruct;
- (BOOL)_updateDeliveryAccountCredentialIfNecessaryForAccountWithAccount:(id)a0;
- (BOOL)_updateDeliveryAccountCredentialIfNecessaryForReceivingAccount:(id)a0;
- (BOOL)_shouldAutoUpdateDeliveryAccount:(id)a0 forChangedReceivingAccount:(id)a1;
- (BOOL)_hostnamesHaveSameTopLevelDomain:(id)a0 deliveryAccount:(id)a1;
- (id)initWithAccountFactory:(id)a0;
- (BOOL)updateDeliveryAccountCredentialIfNecessaryForAccountWithSystemAccount:(id)a0;
- (BOOL)updateDeliveryAccountCredentialIfNecessaryForAccountWithIdentifier:(id)a0;

@end
