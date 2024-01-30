@class NSArray, NSPredicate;

@interface HFConditionCollection : NSObject

@property (retain, nonatomic) NSArray *conditions;
@property (readonly, copy, nonatomic) NSPredicate *predicate;

+ (id)_singleConditionForPredicate:(id)a0 knownConditionsOnly:(BOOL)a1;
+ (id)_flattenedSubpredicatesForAndPredicate:(id)a0;
+ (id)_findBestMatchingConditionsForPredicates:(id)a0;
+ (id)_findBestConditionMatchForPredicates:(id)a0;
+ (id)conditionCollectionForPredicate:(id)a0;

- (void)addCondition:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeCondition:(id)a0;
- (id)initWithConditions:(id)a0;

@end
