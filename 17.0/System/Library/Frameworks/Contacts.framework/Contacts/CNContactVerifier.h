@interface CNContactVerifier : NSObject

+ (id)os_log;
+ (BOOL)arePropertiesOfContact:(id)a0 authorizedForSavingWithContext:(id)a1 error:(id *)a2;
+ (BOOL)isValidContact:(id)a0 error:(id *)a1;

@end
