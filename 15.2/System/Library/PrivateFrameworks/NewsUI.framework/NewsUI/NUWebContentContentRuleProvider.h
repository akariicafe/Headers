@class NSString;
@protocol FCNewsAppConfigurationManager, FCHeadlineProviding;

@interface NUWebContentContentRuleProvider : NSObject <SXWebContentComponentContentRuleProvider>

@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)contentRules;
- (id)initWithAppConfigurationManager:(id)a0 headline:(id)a1;

@end
