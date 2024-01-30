@class HKElectrocardiogram, HKUnit;

@interface _HKElectrocardiogramVoltageMeasurementEnumerator : NSEnumerator {
    HKElectrocardiogram *_electrocardiogram;
    double _samplingHertz;
    HKUnit *_microvoltsUnit;
    long long _index;
    struct __wrap_iter<const float *> { float *__i; } _current;
    struct __wrap_iter<const float *> { float *__i; } _end;
}

- (id)nextObject;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithElectrocardiogram:(id)a0 leadIMicroVoltsBegin:(struct __wrap_iter<const float *> { float *x0; })a1 end:(struct __wrap_iter<const float *> { float *x0; })a2;

@end
