@interface ENSSKeychain : NSObject

+ (id)allAccounts;
+ (id)accountsForService:(id)a0;
+ (id)passwordForService:(id)a0 account:(id)a1;
+ (id)passwordForService:(id)a0 account:(id)a1 error:(id *)a2;
+ (BOOL)deletePasswordForService:(id)a0 account:(id)a1;
+ (BOOL)deletePasswordForService:(id)a0 account:(id)a1 error:(id *)a2;
+ (BOOL)setPassword:(id)a0 forService:(id)a1 account:(id)a2;
+ (BOOL)setPassword:(id)a0 forService:(id)a1 account:(id)a2 error:(id *)a3;
+ (void *)accessibilityType;
+ (void)setAccessibilityType:(void *)a0;

@end
