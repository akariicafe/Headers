@class NSSet, NSObject;

@interface CRKWaitForKeyValueChangeOperation : CATOperation

@property (readonly, nonatomic) NSObject *object;
@property (readonly, copy, nonatomic) NSSet *keyPaths;
@property (copy, nonatomic) id /* block */ conditionEvaluator;
@property (nonatomic, getter=isObserving) BOOL observing;

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (void)endObservingObject;
- (void)beginObservingObject;
- (void)evaluateConditions;
- (id)initWithObject:(id)a0 keyPaths:(id)a1 conditionEvaluator:(id /* block */)a2;

@end
