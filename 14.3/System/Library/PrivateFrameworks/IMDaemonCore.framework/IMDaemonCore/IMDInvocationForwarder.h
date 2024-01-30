@class NSLock, NSMutableArray;

@interface IMDInvocationForwarder : NSObject

@property (retain, nonatomic) NSMutableArray *_targets;
@property (retain, nonatomic) NSLock *_lock;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)removeTarget:(id)a0;
- (void)addTarget:(id)a0;
- (id)initWithTargets:(id)a0;

@end
