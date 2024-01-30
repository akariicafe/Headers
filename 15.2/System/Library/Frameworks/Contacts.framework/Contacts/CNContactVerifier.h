@interface CNContactVerifier : NSObject

+ (BOOL)isValidContact:(id)a0 error:(id *)a1;
+ (BOOL)arePropertiesOfContact:(id)a0 authorizedForSavingWithContext:(id)a1 error:(id *)a2;

@end
