@class NSString;

@interface _CDPeriodicScheduler : NSObject <_CDPeriodicScheduler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerJob:(id)a0;
- (void)updateExecutionCriteriaOnJob:(id)a0;
- (void)unregisterJob:(id)a0;

@end
