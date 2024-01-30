@class NSNotificationCenter, NSOperationQueue, NSString;

@interface __NSObserver : NSObject {
    NSNotificationCenter *nc;
    NSOperationQueue *queue;
    NSString *name;
    id object;
    id /* block */ block;
}

- (void)_doit:(id)a0;
- (id)name;
- (void)dealloc;
- (id)object;

@end
