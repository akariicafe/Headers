@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}

- (id)retain;
- (id)initWithManager:(id)a0;
- (oneway void)release;
- (BOOL)_tryRetain;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)forwardInvocation:(id)a0;
- (void)setTargetClass:(Class)a0;
- (void)superRelease;

@end
