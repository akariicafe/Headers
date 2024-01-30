@class NSMutableArray;

@interface CLMClickEventMonitor : NSObject

@property (retain) NSMutableArray *events;
@property (nonatomic) struct shared_ptr<HIDEventMonitor> { struct HIDEventMonitor *__ptr_; struct __shared_weak_count *__cntrl_; } hidEventMonitor;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)initWithHIDDispatchQueueQOSClass:(unsigned int)a0 relativePriority:(int)a1;
- (void)newClickEvent:(id)a0;
- (id)eventsForMovieStartingAtMachAbsoluteTime:(unsigned long long)a0 endingAt:(unsigned long long)a1;

@end
