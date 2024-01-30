@class NSString, NSData, WFWorkflow, WFTrigger;

@interface WFAutomationSuggestion : NSObject <NSCopying>

@property (readonly, nonatomic) WFTrigger *trigger;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSData *serializedSuggestion;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) NSString *activityType;
@property (readonly, nonatomic) NSString *intentType;
@property (readonly, nonatomic) NSString *trialID;

+ (id)generateTestSuggestions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIntent:(id)a0 trigger:(id)a1 bundleIdentifier:(id)a2 serializedSuggestion:(id)a3 trialID:(id)a4;
- (id)initWithUserActivity:(id)a0 trigger:(id)a1 bundleIdentifier:(id)a2 serializedSuggestion:(id)a3 trialID:(id)a4;
- (id)initWithShortcut:(id)a0 trigger:(id)a1 bundleIdentifier:(id)a2 serializedSuggestion:(id)a3 trialID:(id)a4;

@end
