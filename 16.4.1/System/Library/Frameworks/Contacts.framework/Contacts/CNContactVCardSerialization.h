@interface CNContactVCardSerialization : NSObject

+ (id)dataWithContacts:(id)a0 error:(id *)a1;
+ (id)descriptorForRequiredKeysWithOptions:(id)a0;
+ (id)descriptorForRequiredKeys;
+ (id)dataWithContacts:(id)a0 options:(id)a1 error:(id *)a2;
+ (void)dataWithContacts:(id)a0 options:(id)a1 scheduler:(id)a2 completionHandler:(id /* block */)a3;
+ (void)dataWithContacts:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
+ (void)contactsWithData:(id)a0 scheduler:(id)a1 completionHandler:(id /* block */)a2;
+ (void)logWritingContactsToVCard:(id)a0 options:(id)a1 logger:(id)a2;
+ (void)contactsWithData:(id)a0 completionHandler:(id /* block */)a1;
+ (id)descriptorForRequiredKeysWithOptions:(id)a0 description:(id)a1;
+ (id)contactsWithData:(id)a0 error:(id *)a1;
+ (id)contactsWithMECARDString:(id)a0 error:(id *)a1;
+ (id)summaryOfVCard:(id)a0 error:(id *)a1;
+ (id)dataWithContacts:(id)a0 options:(id)a1 error:(id *)a2 environment:(id)a3;
+ (id)contactsWithData:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)summaryOfLocationVCard:(id)a0 error:(id *)a1;

@end
