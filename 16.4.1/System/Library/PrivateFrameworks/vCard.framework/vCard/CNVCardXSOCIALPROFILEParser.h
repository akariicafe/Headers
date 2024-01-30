@interface CNVCardXSOCIALPROFILEParser : NSObject

+ (id)os_log;
+ (id)profileFromURL:(id)a0;
+ (id)unfold:(id)a0;
+ (id)adjust:(id)a0 withParameters:(id)a1;
+ (void)handleBundleIndentifiersAsList:(id)a0 socialProfile:(id)a1;
+ (void)handleSpecialCaseUpdateForService:(id)a0 socialProfile:(id)a1;
+ (id)parametersForSocialProperty:(id)a0;
+ (void)processExtensionValuesForLines:(id)a0 parser:(id)a1;
+ (BOOL)propertyLooksLikeDOSAttackString:(id)a0;
+ (id)rawForSocialProperty:(id)a0;
+ (id)typeForSocialProperty:(id)a0;
+ (id)unwrapDoubleQuotedProperty:(id)a0;
+ (id)urlSuffixForSocialProperty:(id)a0;
+ (id)valueWithParser:(id)a0;

@end
