@class NSDictionary, DeliveryAccount, MailAccount;

@interface _MFAccountInformation : NSObject

@property (retain, nonatomic) MailAccount *account;
@property (retain, nonatomic) DeliveryAccount *deliveryAccount;
@property (retain, nonatomic) NSDictionary *localizedNotes;

- (void).cxx_destruct;

@end
