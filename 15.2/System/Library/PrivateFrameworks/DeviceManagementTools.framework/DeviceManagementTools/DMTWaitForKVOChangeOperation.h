@class NSString, NSObject;

@interface DMTWaitForKVOChangeOperation : CATOperation

@property (readonly, nonatomic) NSObject *observedObject;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) NSObject *expectedValue;
@property (readonly, nonatomic) BOOL requireExpectedValue;
@property (nonatomic, getter=isObserving) BOOL observing;
@property (retain, nonatomic) NSObject *initialValue;

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (void)beginObserving;
- (void)compareExpectedValueWithChangedValue:(id)a0;
- (void)endOperationAndTearDownWithError:(id)a0 resultObject:(id)a1;
- (void)endObservingIfNeeded;
- (void)handleKVOChangeWithValueOfKeyPath:(id)a0;
- (id)initWithObservedObject:(id)a0 keyPath:(id)a1 expectedValue:(id)a2 requireExpectedValue:(BOOL)a3;

@end
