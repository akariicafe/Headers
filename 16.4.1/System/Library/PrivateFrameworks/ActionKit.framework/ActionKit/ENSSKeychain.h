@interface ENSSKeychain : NSObject

+ (id)accountsForService:(id)a0;
+ (id)allAccounts;
+ (BOOL)setPassword:(id)a0 forService:(id)a1 account:(id)a2;
+ (void *)accessibilityType;
+ (BOOL)deletePasswordForService:(id)a0 account:(id)a1;
+ (BOOL)deletePasswordForService:(id)a0 account:(id)a1 error:(id *)a2;
+ (id)passwordForService:(id)a0 account:(id)a1;
+ (id)passwordForService:(id)a0 account:(id)a1 error:(id *)a2;
+ (void)setAccessibilityType:(void *)a0;
+ (BOOL)setPassword:(id)a0 forService:(id)a1 account:(id)a2 error:(id *)a3;

@end
