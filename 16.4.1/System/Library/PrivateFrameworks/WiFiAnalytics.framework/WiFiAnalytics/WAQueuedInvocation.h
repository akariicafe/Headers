@class NSInvocation;

@interface WAQueuedInvocation : NSObject

@property (retain, nonatomic) NSInvocation *invocation;
@property (copy, nonatomic) id /* block */ reply;

- (void).cxx_destruct;

@end
