@class NSString, AVKeyPathDependencyManager, AVTwoPartKeyPath, NSObject;

@interface AVKeyPathFlattener : NSObject <AVKeyPathDependencyHost, AVWeakObservable> {
    AVKeyPathDependencyManager *_dependencyManager;
    AVTwoPartKeyPath *_dependencyKeyPath;
    NSObject *_observedObject;
}

@property (readonly, nonatomic) id dependentProperty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)declareKeyPathDependenciesWithRegistry:(id)a0;
- (void)addCallbackToCancelDuringDeallocation:(id)a0;
- (id)observedObject;
- (id)initForObservingValueAtKeyPath:(id)a0 onObject:(id)a1;
- (id)topLevelDependencyProperty;
- (id)init;
- (void)dealloc;

@end
