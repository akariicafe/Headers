@interface CNSaveRequestVerifier : NSObject

+ (id)os_log;
+ (BOOL)_areDirectPropertiesOfSaveRequest:(id)a0 authorizedForSavingWithContext:(id)a1 error:(id *)a2;
+ (BOOL)_arePropertiesOfContacts:(id)a0 inSaveRequest:(id)a1 authorizedForSavingWithContext:(id)a2 error:(id *)a3;
+ (BOOL)_isEditingOfContacts:(id)a0 inSaveRequest:(id)a1 authorizedForSavingWithContext:(id)a2 error:(id *)a3;
+ (id)insertedAndUpdatedContactsForSaveRequest:(id)a0;
+ (BOOL)isSaveRequest:(id)a0 authorizedForSavingWithContext:(id)a1 error:(id *)a2;
+ (BOOL)isValidSaveRequest:(id)a0 error:(id *)a1;

@end
