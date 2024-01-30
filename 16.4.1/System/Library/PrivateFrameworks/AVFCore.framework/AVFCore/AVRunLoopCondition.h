@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
    NSMutableArray *_runLoopStateList;
}

+ (void)initialize;

- (BOOL)waitUntilDate:(id)a0;
- (BOOL)_waitInMode:(id)a0 untilDate:(id)a1;
- (BOOL)waitUntilDate:(id)a0 inMode:(id)a1;
- (void)_signalRunLoopWithState:(id)a0;
- (void)wait;
- (void)dealloc;
- (void)broadcast;
- (void)signal;
- (void)waitInMode:(id)a0;
- (id)init;

@end
