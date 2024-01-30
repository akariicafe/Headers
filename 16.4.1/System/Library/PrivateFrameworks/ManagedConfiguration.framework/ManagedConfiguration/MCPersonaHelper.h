@interface MCPersonaHelper : NSObject

+ (id)managedAppleIDNameWithPersonaID:(id)a0;
+ (void)untrackDirtyPersona:(id)a0;
+ (void)removeExistingEnterprisePersonaAndAccountsAsynchronously;
+ (void)removePersonaAndAccountsWithPersonaID:(id)a0;
+ (id)performBlockUnderPersonalPersona:(id /* block */)a0;
+ (id)performBlockUnderPersona:(id)a0 block:(id /* block */)a1;
+ (id)accountIdentifierForAppleAccountWithPersonaID:(id)a0;
+ (BOOL)adoptPersona:(id)a0 error:(id *)a1;
+ (void)trackDirtyPersona:(id)a0;
+ (id)createEnterprisePersona:(id *)a0 passcode:(id)a1;
+ (void)removePersona:(id)a0;
+ (void)signOutEnterpriseAccountWithPersonaID:(id)a0;
+ (id)updateManagementInformationForAppleAccountWithPersonaID:(id)a0 descriptionName:(id)a1 managingSourceName:(id)a2;
+ (BOOL)isCurrentPersonaEnterprise;
+ (id)appleAccountWithPersonaID:(id)a0;
+ (void)untrackAllDirtyPersonas;
+ (BOOL)personaWithUniqueIdentifierExists:(id)a0;
+ (id)currentPersonaID;
+ (id)fetchDirtyPersonaIDs;

@end
