@class NSLock;

@interface ISDelegateProxy : NSObject {
    id _delegate;
    NSLock *_lock;
    BOOL _shouldMessageMainThread;
}

- (void)forwardInvocation:(id)a0;
- (id)init;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)setDelegate:(id)a0;
- (void)setShouldMessageMainThread:(BOOL)a0;
- (void)sendInvocationToDelegate:(id)a0;

@end
