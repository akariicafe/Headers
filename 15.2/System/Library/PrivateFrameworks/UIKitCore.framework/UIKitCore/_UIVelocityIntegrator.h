@interface _UIVelocityIntegrator : NSObject {
    struct deque<_UIVelocityIntegratorDataSample, std::allocator<_UIVelocityIntegratorDataSample>> { struct __split_buffer<_UIVelocityIntegratorDataSample *, std::allocator<_UIVelocityIntegratorDataSample *>> { struct _UIVelocityIntegratorDataSample **__first_; struct _UIVelocityIntegratorDataSample **__begin_; struct _UIVelocityIntegratorDataSample **__end_; struct __compressed_pair<_UIVelocityIntegratorDataSample **, std::allocator<_UIVelocityIntegratorDataSample *>> { struct _UIVelocityIntegratorDataSample **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<_UIVelocityIntegratorDataSample>> { unsigned long long __value_; } __size_; } _samples;
    BOOL _hasMemoizedVelocity;
    double _resetHysteresisOnSampleThetaDiff;
    id /* block */ _didResetHysteresisOnThetaDiffHandler;
    struct CGVector { double dx; double dy; } _totalTranslation;
    struct CGVector { double dx; double dy; } _memoizedVelocity;
}

@property (nonatomic) double minimumRequiredMovement;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } velocity;
@property (readonly, nonatomic) struct CGVector { double x0; double x1; } offset;
@property (nonatomic) double hysteresisTimeInterval;

- (void)addSample:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasVelocity;
- (void)reset;
- (id).cxx_construct;

@end
