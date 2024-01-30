@class NSObject;
@protocol OS_dispatch_queue;

@interface PDSQueueProxy : NSProxy

@property (retain, nonatomic) id target;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long mode;

- (BOOL)conformsToProtocol:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithTarget:(id)a0 queue:(id)a1 mode:(unsigned long long)a2;

@end
