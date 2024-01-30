@class NSDate, NSMutableSet, NSObject;
@protocol OS_dispatch_source;

@interface _PASCoalescingTimerGuardedData : NSObject {
    NSObject<OS_dispatch_source> *coalescingSource;
    unsigned long long currentCoalescingTimerId;
    NSDate *nextCoalescedEventTime;
    NSMutableSet *nonCoalescingSources;
    unsigned long long currentNonCoalescingTimerGeneration;
    id acc;
}

- (void).cxx_destruct;

@end
