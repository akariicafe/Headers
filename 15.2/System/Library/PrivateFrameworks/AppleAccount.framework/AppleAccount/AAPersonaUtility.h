@interface AAPersonaUtility : NSObject

+ (void)verifyAndFixPersonaIfNeeded:(id)a0 desiredContext:(id)a1;
+ (BOOL)isDataSeparatedAccount:(id)a0;
+ (BOOL)personaConsistencyCheck:(id)a0;
+ (id)findEnterprisePersonaIdentifier;

@end
