@interface AVRunLoopConditionRunLoopState : NSObject

@property (readonly, nonatomic) struct __CFRunLoop { } *runLoop;
@property (nonatomic) struct __CFRunLoopSource { } *signalSource;
@property (nonatomic) BOOL signaled;

+ (id)runLoopStateWithRunLoop:(struct __CFRunLoop { } *)a0;

- (id)initWithRunLoop:(struct __CFRunLoop { } *)a0;
- (void)dealloc;

@end
