@interface PGRunLoopObserver : NSObject

@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (copy, nonatomic) id /* block */ actions;

- (void).cxx_destruct;
- (void)dealloc;

@end
