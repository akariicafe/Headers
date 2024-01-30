@class NSArray;

@interface _HMEventOrTimerTriggerBuilder : _HMTriggerBuilder {
    unsigned long long _recurrenceDays;
}

@property (copy, nonatomic) NSArray *recurrences;
@property (nonatomic) unsigned long long recurrenceDays;

- (void)updateRecurrences:(id)a0 completionHandler:(id /* block */)a1;

@end
