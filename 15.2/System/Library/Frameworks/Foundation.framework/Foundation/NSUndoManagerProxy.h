@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (id)initWithManager:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)superRelease;
- (id)retain;
- (void)setTargetClass:(Class)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
