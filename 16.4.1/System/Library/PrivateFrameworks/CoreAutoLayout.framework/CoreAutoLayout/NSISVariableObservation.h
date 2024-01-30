@class NSISVariable;

@interface NSISVariableObservation : NSObject {
    NSISVariableObservation *_nextDirtyObservation;
    NSISVariableObservation *_prevDirtyObservation;
    NSISVariable *_variable;
    double _lastValue;
    BOOL _valueIsDirtied;
}

- (void)valueWasDirtied;
- (id)initWithVariable:(id)a0;
- (void)dealloc;
- (void)emitValueIfNeededWithEngine:(id)a0;

@end
