@class NSString, NSSet;

@interface AVProxyKVOObserver : NSObject {
    id _retainedObservedObject;
    id _unsafeUnretainedObservedObject;
    BOOL _canHandleChanges;
}

@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) BOOL includeInitialValue;
@property (readonly, nonatomic) BOOL includeChanges;
@property (readonly, nonatomic) NSSet *keyPaths;
@property (readonly, nonatomic) id /* block */ changesBlock;

- (void)stopObserving;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startObserving:(id)a0 completion:(id /* block */)a1;
- (id)initWithObservedObject:(id)a0 observer:(id)a1 keyPaths:(id)a2 retainingObservedObject:(BOOL)a3 includeInitialValue:(BOOL)a4 includeChanges:(BOOL)a5 changesBlock:(id /* block */)a6;
- (void)_handleValueChangeForKeyPath:(id)a0 ofObject:(id)a1 oldValue:(id)a2 newValue:(id)a3 context:(void *)a4;

@end
