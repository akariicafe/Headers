@interface CNUserActivitySerialization : NSObject

+ (id)descriptorForRequiredKeys;
+ (id)fullNameForContact:(id)a0;
+ (id)distinctPhoneNumbersForContact:(id)a0;
+ (id)allAvailableServerUUIDsForContact:(id)a0;
+ (id)distinctEmailAddressesForContact:(id)a0;
+ (BOOL)isContactACompany:(id)a0;
+ (id)userActivityPayloadWithContacts:(id)a0 shouldUnify:(BOOL)a1;
+ (id)userActivityTitleWithContacts:(id)a0;

@end
