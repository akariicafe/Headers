@interface DMCPersonaHelper : NSObject

+ (void)removePersonaAndAccountsWithPersonaID:(id)a0;
+ (id)performBlockUnderPersonalPersona:(id /* block */)a0;
+ (id)performBlockUnderPersona:(id)a0 block:(id /* block */)a1;
+ (BOOL)isCurrentPersonaEnterprise;
+ (id)currentPersonaID;
+ (id)enterprisePersonaIdentifier;
+ (id)createEnterprisePersonaWithDevicePasscode:(id)a0 error:(id *)a1;
+ (id)currentPersonaTypeString;
+ (id)enterprisePersonaDisplayName;
+ (BOOL)removePersona:(id)a0 error:(id *)a1;
+ (void)setPersonaIdentifierForApps:(id)a0 personaID:(id)a1 completionHandler:(id /* block */)a2;

@end
