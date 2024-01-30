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
+ (id)activityEntryKey;
+ (id)activityStatesEntryKey;

- (void)disable;
- (void)enable;
- (void)enumerateCriteriaWithBlock:(id /* block */)a0;
- (void)didChangeCriterion:(id)a0;
- (BOOL)allCriteriaSatisfied;
- (id)initWithIdentifier:(id)a0 withCriteria:(id)a1 withMustRunCriterion:(id)a2 withQueue:(id)a3 withInterruptBlock:(id /* block */)a4 withActivityBlock:(id /* block */)a5;
- (void)interruptActivity;
- (void)logEntry;
- (void)syncWithDB;
- (void).cxx_destruct;
- (void)runActivity;
- (id)mustRunCriterionString;
- (BOOL)mustRunCriterionSatisfied;
- (id)criteriaString;

@end
