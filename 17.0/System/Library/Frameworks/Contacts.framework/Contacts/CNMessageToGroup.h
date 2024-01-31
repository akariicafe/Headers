@class CNContactFormatter;

@interface CNMessageToGroup : NSObject

@property (retain, nonatomic) CNContactFormatter *contactFormatter;

+ (id)descriptorForRequiredKeys;
+ (id)os_log;

- (id)init;
- (void).cxx_destruct;
- (id)messageUrlForContacts:(id)a0;
- (id)emailAddressForContact:(id)a0;
- (id)messagingAddressForContact:(id)a0;
- (id)santizeMessagingAddress:(id)a0;

@end
