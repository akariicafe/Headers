@interface MFAccountLoader : NSObject

+ (Class)_accountClassForString:(id)a0 error:(id *)a1;
+ (id)_accountClassStringWithPersistentAccount:(id)a0 error:(id *)a1;
+ (id)_bundlePathForAccountClassString:(id)a0;
+ (Class)accountClassForPersistentAccount:(id)a0 error:(id *)a1;
+ (id)accountWithAccountTypeIdentifier:(id)a0 error:(id *)a1;
+ (id)accountWithPersistentAccount:(id)a0 error:(id *)a1;
+ (BOOL)loadBundleForAccountClassString:(id)a0 error:(id *)a1;

@end
