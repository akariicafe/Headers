@class NSMutableArray, Protocol;

@interface SKInvocationQueueProxy : NSObject {
    NSMutableArray *_invocationQueue;
    Protocol *_protocol;
}

@property (retain, nonatomic) id invocationTarget;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;

@end
