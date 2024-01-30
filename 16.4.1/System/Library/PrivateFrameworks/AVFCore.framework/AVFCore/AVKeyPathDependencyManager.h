@class AVWeakObservableCallbackCancellationHelper, AVWeakReference, NSMutableSet;

@interface AVKeyPathDependencyManager : NSObject <AVKeyPathDependencyRegistration> {
    AVWeakReference *_weakReferenceToDependencyHost;
    AVWeakObservableCallbackCancellationHelper *_callbackCancellationHelper;
    NSMutableSet *_keyPathDependencies;
}

- (void)dependencyHostIsFullyInitialized;
- (void)cancelAllCallbacks;
- (void)dealloc;
- (void)addCallbackToCancel:(id)a0;
- (id)initWithDependencyHost:(id)a0;
- (void)valueForKey:(id)a0 dependsOnValueAtKeyPath:(id)a1;

@end
