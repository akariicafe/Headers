@class NSArray;

@interface CNObservableContractTerminationContext : NSObject

@property (readonly, copy) NSArray *callStack;
@property (readonly) unsigned long long threadId;

+ (unsigned long long)currentThreadId;
+ (id)currentContext;

- (id)initWithCallStack:(id)a0 threadId:(unsigned long long)a1;
- (void).cxx_destruct;

@end
