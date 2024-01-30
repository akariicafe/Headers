@class CNContactFormatter;

@interface CNMailToGroup : NSObject

@property (retain, nonatomic) CNContactFormatter *contactFormatter;

+ (id)descriptorForRequiredKeys;
+ (id)os_log;

- (id)init;
- (void).cxx_destruct;
- (BOOL)allContactsHaveEmailAddress:(id)a0;
- (id)mailUrlForContacts:(id)a0 needsEmailAddresses:(BOOL)a1;
- (id)mailingAddressForContact:(id)a0;
- (id)emailAddressForContact:(id)a0;
- (id)mailUrlForContacts:(id)a0;
- (id)santizeMailingAddress:(id)a0;

@end
