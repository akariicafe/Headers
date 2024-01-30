@class NSObject, EKEventStore;
@protocol OS_dispatch_queue;

@interface MKCalendarMigrator : NSObject {
    EKEventStore *_eventStore;
    unsigned long long _operationCount;
    NSObject<OS_dispatch_queue> *_queue;
}

- (unsigned long long)operationCount;
- (void).cxx_destruct;
- (id)init;
- (void)import:(id)a0;
- (void)importiCal:(id)a0;

@end
