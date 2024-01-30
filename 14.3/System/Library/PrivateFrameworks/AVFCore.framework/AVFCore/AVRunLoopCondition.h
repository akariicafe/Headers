@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
    NSMutableArray *_runLoopStateList;
}

- (void)wait;
- (id)init;
- (void)dealloc;
- (void)signal;
- (BOOL)waitUntilDate:(id)a0;
- (void)broadcast;
- (BOOL)_waitInMode:(id)a0 untilDate:(id)a1;
- (void)waitInMode:(id)a0;
- (void)_signalRunLoopWithState:(id)a0;
- (BOOL)waitUntilDate:(id)a0 inMode:(id)a1;

@end
