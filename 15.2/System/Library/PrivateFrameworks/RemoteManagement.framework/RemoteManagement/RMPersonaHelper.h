@interface RMPersonaHelper : NSObject

+ (id)performBlockUnderPersonaWithIdentifier:(id)a0 block:(id /* block */)a1;
+ (id)createEnterprisePersonaWithPasscodeData:(id)a0 error:(id *)a1;
+ (void)createEnterprisePersonaWithPasscodeData:(id)a0 completionHandler:(id /* block */)a1;
+ (BOOL)removePersonaWithIdentifier:(id)a0 error:(id *)a1;
+ (void)removePersonaWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)removeEnterprisePersonaWithCompletionHandler:(id /* block */)a0;
+ (id)currentPersonaIdentifier;
+ (id)enterprisePersonaIdentifier;
+ (id)enterprisePersonaDisplayName;
+ (id)appStoreAccountIdentifierForPersonaWithIdentifier:(id)a0;
+ (void)associateBundleIdentifier:(id)a0 withPersonaWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
+ (void)dissociateBundleIdentifier:(id)a0 fromPersonaWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
