@class INIntent, NSString, BMRule, NSArray, NSUserActivity;

@interface ATSSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *activityString;
@property (readonly, nonatomic) BMRule *rule;
@property (retain, nonatomic) NSString *trialID;
@property (readonly, nonatomic) NSArray *triggers;
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSUserActivity *activity;
@property (readonly, copy, nonatomic) NSString *bundleID;

+ (id)intentFromConsequentItem:(id)a0 withActionRetriever:(id)a1;
+ (id)bundleIDFromConsequentItem:(id)a0;
+ (id)activityStringFromConsequentItem:(id)a0 withActionRetriever:(id)a1;
+ (id)triggerFromAntecedentItem:(id)a0 timeRestrictionItem:(id)a1 withRoutineManager:(id)a2;
+ (id)suggestionFromRule:(id)a0 withActionRetriever:(id)a1 routineManager:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)actionTitle;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithTriggers:(id)a0 intent:(id)a1 activityString:(id)a2 bundleID:(id)a3 rule:(id)a4;

@end
