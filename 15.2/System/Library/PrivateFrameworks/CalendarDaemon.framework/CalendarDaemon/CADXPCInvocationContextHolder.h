@class NSMutableArray;

@interface CADXPCInvocationContextHolder : NSObject {
    NSMutableArray *_retainedArguments;
}

@property (readonly, nonatomic) id proxy;

- (void)retainProxy:(id)a0 andArgumentsInInvocation:(id)a1;
- (void)clear;
- (void).cxx_destruct;

@end
