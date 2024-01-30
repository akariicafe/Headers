@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
    NSMutableArray *_runLoopStateList;
}

- (void)signal;
- (BOOL)waitUntilDate:(id)a0;
- (void)broadcast;
- (id)init;
- (void)waitInMode:(id)a0;
- (BOOL)waitUntilDate:(id)a0 inMode:(id)a1;
- (BOOL)_waitInMode:(id)a0 untilDate:(id)a1;
- (void)_signalRunLoopWithState:(id)a0;
- (void)dealloc;
- (void)wait;

@end
