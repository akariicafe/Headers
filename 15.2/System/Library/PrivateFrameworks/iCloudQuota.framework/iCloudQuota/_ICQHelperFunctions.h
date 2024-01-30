@interface _ICQHelperFunctions : NSObject

+ (id)_getOfferDescriptionFromRequestType:(long long)a0;
+ (long long)_getOfferRequestTypeFromOptions:(id)a0 bundleId:(id)a1 isBuddy:(BOOL)a2;
+ (BOOL)defaultKeyExists:(id)a0;
+ (id)replaceWordsIn:(id)a0 with:(id)a1;
+ (id)defaultValueForKey:(id)a0;
+ (id)_darwinNotificationNameForRequestType:(long long)a0;
+ (id)getStringFromNumber:(id)a0;
+ (void)setUserDefaultsBool:(BOOL)a0 forKey:(id)a1;
+ (id)defaultStringValueForKey:(id)a0;
+ (id)findPlaceholdersInString:(id)a0;
+ (id)parseTemplates:(id)a0;
+ (BOOL)isServerMockingEnabled;
+ (id)base64EncodeString:(id)a0;
+ (BOOL)_requestedDefaultOfferInOptions:(id)a0;
+ (BOOL)userDefaultsBoolValueForKey:(id)a0;
+ (id)stringFromTemplates:(id)a0 key:(id)a1;
+ (BOOL)_requestedPremiumOfferInOptions:(id)a0;
+ (BOOL)_requestedFetchOffersInOptions:(id)a0;
+ (BOOL)_checkOptions:(id)a0 forKey:(id)a1;
+ (BOOL)isInternalUI;

@end
