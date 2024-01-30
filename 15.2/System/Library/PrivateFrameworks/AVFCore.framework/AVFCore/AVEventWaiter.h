@class NSCondition;

@interface AVEventWaiter : NSObject {
    NSCondition *_condition;
    BOOL _eventCompleted;
}

- (void)markEventAsCompleted;
- (void)waitUntilEventIsCompleted;
- (id)init;
- (void)dealloc;

@end
