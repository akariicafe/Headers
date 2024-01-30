@class AVWeakObservableCallbackCancellationHelper, AVWeakReference, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration> {
    AVWeakReference *_weakReferenceToDependencyHost;
    AVWeakObservableCallbackCancellationHelper *_callbackCancellationHelper;
    NSMutableSet *_keyPathDependencies;
}

- (void)addCallbackToCancel:(id)a0;
- (void)valueForKey:(id)a0 dependsOnValueAtKeyPath:(id)a1;
- (void)cancelAllCallbacks;
- (void)dependencyHostIsFullyInitialized;
- (id)initWithDependencyHost:(id)a0;
- (void)dealloc;

@end
