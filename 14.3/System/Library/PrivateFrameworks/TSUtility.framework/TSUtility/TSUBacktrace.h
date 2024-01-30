@interface TSUBacktrace : NSObject {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)caller;
+ (id)callee;
+ (id)backtrace;
+ (id)new;

- (id)caller;
- (id)init;
- (id)callee;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)backtraceString;
- (id)initWithAdjustment:(int)a0;
- (id)callerAtIndex:(long long)a0;

@end
