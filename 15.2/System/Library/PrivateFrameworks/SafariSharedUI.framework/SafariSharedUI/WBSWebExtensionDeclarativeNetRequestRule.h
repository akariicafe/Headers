@class NSDictionary, NSArray;

@interface WBSWebExtensionDeclarativeNetRequestRule : NSObject

@property (readonly, nonatomic) long long ruleID;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSDictionary *action;
@property (readonly, copy, nonatomic) NSDictionary *condition;
@property (readonly, nonatomic) NSArray *ruleInWebKitFormat;

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 errorString:(id *)a1;
- (void)removeInvalidResourceTypesForKey:(id)a0;
- (id)_chromeDomainTypeToWebKitDomainType;
- (id)_chromeResourceTypeToWebKitResourceType;
- (id)_convertedRulesForWebKitActionType:(id)a0 chromeActionType:(id)a1;
- (id)_allChromeResourceTypes;
- (id)_webKitRuleWithWebKitActionType:(id)a0 chromeActionType:(id)a1 chromeResourceTypes:(id)a2;
- (id)_convertedResourceTypesForChromeResourceTypes:(id)a0;
- (id)_chromeResourceTypeToWebKitLoadContext;
- (id)_resourcesToTargetWhenNoneAreSpecifiedInRule;

@end
