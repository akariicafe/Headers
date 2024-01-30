@class NSDictionary, NSString, PLEntryNotificationOperatorComposition;

@interface PLActivityCriterionEntry : PLActivityCriterion

@property (copy) id /* block */ criterionBlock;
@property (retain) NSDictionary *filter;
@property (retain) PLEntryNotificationOperatorComposition *entryListener;
@property (readonly) NSString *entryKey;

+ (id)audioOffCriterion;
+ (id)pluggedInCriterion;
+ (id)displayOffCriterion;

- (void)didDisableActivity:(id)a0;
- (void)didEnableActivity:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEntryKey:(id)a0 withFilter:(id)a1 withCriterionBlock:(id /* block */)a2;
- (id)initWithEntryKey:(id)a0 withCriterionBlock:(id /* block */)a1;
- (void)scheduleEntryListener;

@end
