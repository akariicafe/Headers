@class NSISEngine, NSISVariable;

@interface _NSISVariableObservable : NSObservationSource {
    _NSISVariableObservable *_nextDirtyObservable;
    _NSISVariableObservable *_prevDirtyObservable;
    double _lastValue;
    NSISVariable *_variable;
    NSISEngine *_associatedEngine;
    unsigned char _hasLastValue : 1;
    unsigned char _valueIsDirtied : 1;
}

+ (id)observableForVariable:(id)a0 inEngine:(id)a1;

- (void)receiveObservedValue:(id)a0;
- (void)dealloc;
- (BOOL)valueHasChanged;
- (void)emitValueIfNeeded;

@end
