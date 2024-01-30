@interface TSUAssertionHandler : NSObject

@property (class, readonly, nonatomic) BOOL isQAFatalAssertionsEnabled;

+ (void)initialize;
+ (void)setDelegate:(id)a0;
+ (void)simulateCrashWithMessage:(id)a0;
+ (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 isFatal:(BOOL)a3 description:(const char *)a4;
+ (void)logBacktraceThrottled;
+ (id)p_performBlockIgnoringAssertions:(id /* block */)a0 onlyFatal:(BOOL)a1;
+ (id)performBlockIgnoringAssertions:(id /* block */)a0;
+ (id)performBlockIgnoringFatalAssertions:(id /* block */)a0;
+ (int)_atomicIncrementAssertCount;
+ (void)logFullBacktrace;
+ (void)_logBacktraceWithCallStackSymbols:(id)a0;
+ (id)packedBacktraceStringWithReturnAddresses:(id)a0;
+ (void)handleFailureInFunction:(id)a0 file:(id)a1 lineNumber:(long long)a2 isFatal:(BOOL)a3 format:(id)a4 args:(char *)a5;
+ (id)performBlockIgnoringAssertionsAndReturnList:(id /* block */)a0;
+ (id)performBlockIgnoringQAFatalAssertions:(id /* block */)a0;
+ (id)packedBacktraceString;

@end
