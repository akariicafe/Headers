@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLActivityScheduler : NSObject

@property (retain) NSMutableDictionary *activities;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)scheduleActivityWithIdentifier:(id)a0 withCriteria:(id)a1 withMustRunCriterion:(id)a2 withQueue:(id)a3 withInterruptBlock:(id /* block */)a4 withActivityBlock:(id /* block */)a5;
- (id)lastCompletedDateWithIdentifier:(id)a0;
- (void)cancelActivityWithIdentifier:(id)a0;

@end
