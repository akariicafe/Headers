@class NSISVariable;

@interface NSISVariableObservation : NSObject {
    NSISVariable *_variable;
    double _lastValue;
    BOOL _valueIsDirtied;
}

- (void)dealloc;
- (void)valueWasDirtied;
- (id)initWithVariable:(id)a0;
- (void)emitValueIfNeededWithEngine:(id)a0;

@end
