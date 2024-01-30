@class NSDate, NSString, NSObject;
@protocol OS_dispatch_queue, _CPLScheduledOverrideDelegate, OS_dispatch_source;

@interface _CPLScheduledOverride : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSString *_storageKey;
}

@property (readonly, nonatomic) unsigned long long budget;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSDate *endDate;
@property (weak, nonatomic) id<_CPLScheduledOverrideDelegate> delegate;
@property (readonly, nonatomic) NSString *status;

+ (unsigned long long)_systemBudgetForBudgetKey:(id)a0;

- (void)cancel;
- (void).cxx_destruct;
- (BOOL)scheduleEndOfOverride;
- (id)initWithBudget:(unsigned long long)a0 queue:(id)a1;
- (void)_scheduleEndWithTimeInterval:(double)a0;
- (BOOL)scheduleEndFromPersistedOverride;

@end
