@class PLEntry, NSArray, PLActivityCriterion, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface PLActivity : NSObject <PLActivityCriterionDelegate>

@property (nonatomic) long long state;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) id /* block */ activityBlock;
@property (copy) id /* block */ interruptBlock;
@property (retain) NSArray *criteria;
@property (retain) PLActivityCriterion *mustRunCriterion;
@property (retain) PLEntry *activityEntry;
@property (retain) NSDate *lastCompletedDate;
@property (readonly) NSString *identifier;
@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)workQueue;
+ (id)activityStatesEntryKey;
+ (id)activityEntryKey;

- (void)enable;
- (void)syncWithDB;
- (void)logEntry;
- (void).cxx_destruct;
- (void)enumerateCriteriaWithBlock:(id /* block */)a0;
- (id)criteriaString;
- (void)disable;
- (void)runActivity;
- (BOOL)allCriteriaSatisfied;
- (id)mustRunCriterionString;
- (void)didChangeCriterion:(id)a0;
- (void)interruptActivity;
- (BOOL)mustRunCriterionSatisfied;
- (id)initWithIdentifier:(id)a0 withCriteria:(id)a1 withMustRunCriterion:(id)a2 withQueue:(id)a3 withInterruptBlock:(id /* block */)a4 withActivityBlock:(id /* block */)a5;

@end
