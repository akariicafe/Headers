@interface AAPersonaUtility : NSObject

+ (BOOL)isDataSeparatedAccount:(id)a0;
+ (void)verifyAndFixPersonaIfNeeded:(id)a0 desiredContext:(id)a1;
+ (id)findEnterprisePersonaIdentifier;
+ (BOOL)personaConsistencyCheck:(id)a0;

@end
