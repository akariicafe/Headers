@interface TSUBacktrace : NSObject {
    void **_callstack;
    int _frames;
    int _initAdjustment;
}

+ (id)caller;
+ (id)callee;
+ (id)new;
+ (id)backtrace;

- (id)caller;
- (id)callee;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;
- (id)backtraceString;
- (id)initWithAdjustment:(int)a0;
- (id)callerAtIndex:(long long)a0;

@end
