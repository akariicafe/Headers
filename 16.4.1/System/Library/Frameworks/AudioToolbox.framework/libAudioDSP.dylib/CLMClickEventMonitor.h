@class NSMutableArray;

@interface CLMClickEventMonitor : NSObject

@property (retain) NSMutableArray *events;
@property (nonatomic) struct shared_ptr<HIDEventMonitor> { struct HIDEventMonitor *__ptr_; struct __shared_weak_count *__cntrl_; } hidEventMonitor;

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (id)eventsForMovieStartingAtMachAbsoluteTime:(unsigned long long)a0 endingAt:(unsigned long long)a1;
- (id)initWithHIDDispatchQueueQOSClass:(unsigned int)a0 relativePriority:(int)a1;
- (void)newClickEvent:(id)a0;

@end
