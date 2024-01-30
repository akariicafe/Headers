@interface MCPersonaHelper : NSObject

+ (id)appleAccountWithPersonaID:(id)a0;
+ (id)accountIdentifierForAppleAccountWithPersonaID:(id)a0;
+ (id)createEnterprisePersona:(id *)a0 passcode:(id)a1;
+ (BOOL)personaWithUniqueIdentifierExists:(id)a0;
+ (id)managedAppleIDNameWithPersonaID:(id)a0;
+ (id)performBlockUnderPersonalPersona:(id /* block */)a0;
+ (BOOL)isCurrentPersonaEnterprise;
+ (void)signOutEnterpriseAccountWithPersonaID:(id)a0;
+ (id)updateAccountDescriptionName:(id)a0 forAppleAccountWithPersonaID:(id)a1;
+ (void)removePersonaAndAccountsWithPersonaID:(id)a0;
+ (id)performBlockUnderPersona:(id)a0 block:(id /* block */)a1;
+ (void)untrackDirtyPersona:(id)a0;
+ (void)removePersona:(id)a0;
+ (id)fetchDirtyPersonaIDs;
+ (void)trackDirtyPersona:(id)a0;
+ (BOOL)adoptPersona:(id)a0 error:(id *)a1;
+ (void)untrackAllDirtyPersonas;
+ (void)removeExistingEnterprisePersonaAndAccountsAsynchronously;
+ (id)currentPersonaID;

@end
