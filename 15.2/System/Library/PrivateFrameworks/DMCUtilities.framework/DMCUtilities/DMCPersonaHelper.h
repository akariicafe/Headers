@interface DMCPersonaHelper : NSObject

+ (id)performBlockUnderPersonalPersona:(id /* block */)a0;
+ (id)performBlockUnderPersona:(id)a0 block:(id /* block */)a1;
+ (BOOL)isCurrentPersonaEnterprise;
+ (void)removePersonaAndAccountsWithPersonaID:(id)a0;
+ (id)currentPersonaID;
+ (id)enterprisePersonaIdentifier;
+ (id)currentPersonaTypeString;
+ (BOOL)removePersona:(id)a0 error:(id *)a1;
+ (id)createEnterprisePersonaWithDevicePasscode:(id)a0 error:(id *)a1;

@end
