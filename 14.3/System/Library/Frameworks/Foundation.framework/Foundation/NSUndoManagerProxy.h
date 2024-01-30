@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (id)initWithManager:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (oneway void)release;
- (BOOL)_tryRetain;
- (void)superRelease;
- (void)setTargetClass:(Class)a0;
- (id)retain;

@end
