@interface MCCommunicationServiceRulesUtilities : NSObject

+ (id)defaultAppBundleIDForCommunicationServiceType:(id)a0 forAccountWithIdentifier:(id)a1;
+ (id)restrictionsForValidatedCommunicationServiceRules:(id)a0;
+ (id)validServiceTypes;
+ (id)validatedCommunicationServiceRules:(id)a0 outError:(id *)a1;

@end
