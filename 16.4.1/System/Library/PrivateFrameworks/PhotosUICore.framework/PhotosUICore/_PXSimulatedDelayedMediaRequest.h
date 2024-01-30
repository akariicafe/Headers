@class NSDictionary;

@interface _PXSimulatedDelayedMediaRequest : _PXSimulatedMediaRequest {
    double _delay;
    double _delayFraction;
    BOOL _didScheduleFinalCallback;
    double _originalProgress;
    id _lastOriginalResult;
    NSDictionary *_lastOriginalInfo;
}

- (void).cxx_destruct;
- (void)_handleDelayFraction:(double)a0;
- (void)_produceFinalCallback;
- (double)_simulatedProgressForProgress:(double)a0;
- (void)handleOriginalProgress:(double)a0 error:(id)a1 stop:(BOOL *)a2 info:(id)a3;
- (void)handleOriginalResult:(id)a0 info:(id)a1;
- (id)initWithWrappedMediaRequest:(id)a0 delay:(double)a1;

@end
