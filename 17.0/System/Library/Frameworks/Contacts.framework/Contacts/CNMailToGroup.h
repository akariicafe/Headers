@class CNContactFormatter;

@interface CNMailToGroup : NSObject

@property (retain, nonatomic) CNContactFormatter *contactFormatter;

+ (id)descriptorForRequiredKeys;
+ (id)os_log;
+ (id)bestGuessEmailAddressForAddresses:(id)a0 sendingAddressDomain:(id)a1 alreadyDuetRanked:(BOOL)a2;
+ (id)bestGuessEmailAddressForContact:(id)a0;
+ (id)bestGuessEmailAddressForContact:(id)a0 sendingAddressDomain:(id)a1;
+ (id)queryForEmailAddresses:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)mailUrlForContacts:(id)a0 needsEmailAddresses:(BOOL)a1;
- (id)mailUrlForContacts:(id)a0;
- (BOOL)allContactsHaveEmailAddress:(id)a0;
- (id)bestGuessEmailAddressForContact:(id)a0;
- (id)mailUrlForMailingAddresses:(id)a0;
- (id)mailUrlWithEmailAddressesForContacts:(id)a0;
- (id)mailingAddressForContact:(id)a0;
- (id)mailingAddressWithEmailForContact:(id)a0;
- (id)santizeMailingAddress:(id)a0;

@end
