@class NSCondition;

@interface AVEventWaiter : NSObject {
    NSCondition *_condition;
    BOOL _eventCompleted;
}

- (void)dealloc;
- (id)init;
- (void)markEventAsCompleted;
- (void)waitUntilEventIsCompleted;

@end
