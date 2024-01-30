@interface ContactsUtilities : NSObject

+ (id)contactStore;
+ (id)contactKeys;
+ (id)contactForAssistantId:(id)a0;
+ (id)phoneNumbersForContact:(id)a0;
+ (id)contactForEmail:(id)a0;
+ (id)contactForPhone:(id)a0;
+ (id)__findOptimalContactInContacts:(id)a0;

@end
