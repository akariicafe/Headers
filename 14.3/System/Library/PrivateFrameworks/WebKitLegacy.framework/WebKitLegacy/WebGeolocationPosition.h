@class WebGeolocationPositionInternal;

@interface WebGeolocationPosition : NSObject {
    WebGeolocationPositionInternal *_internal;
}

- (void)dealloc;
- (id)initWithTimestamp:(double)a0 latitude:(double)a1 longitude:(double)a2 accuracy:(double)a3;
- (id)initWithGeolocationPosition:(struct GeolocationPositionData { double x0; double x1; double x2; double x3; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x4; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x5; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x6; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x7; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x8; } *)a0;

@end
