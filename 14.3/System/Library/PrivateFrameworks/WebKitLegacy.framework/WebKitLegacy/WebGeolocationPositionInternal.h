@interface WebGeolocationPositionInternal : NSObject {
    struct GeolocationPositionData { double timestamp; double latitude; double longitude; double accuracy; struct Optional<double> { BOOL init_; union constexpr_storage_t<double> { unsigned char dummy_; double value_; } storage_; } altitude; struct Optional<double> { BOOL init_; union constexpr_storage_t<double> { unsigned char dummy_; double value_; } storage_; } altitudeAccuracy; struct Optional<double> { BOOL init_; union constexpr_storage_t<double> { unsigned char dummy_; double value_; } storage_; } heading; struct Optional<double> { BOOL init_; union constexpr_storage_t<double> { unsigned char dummy_; double value_; } storage_; } speed; struct Optional<double> { BOOL init_; union constexpr_storage_t<double> { unsigned char dummy_; double value_; } storage_; } floorLevel; } _position;
}

- (id).cxx_construct;
- (id)initWithCoreGeolocationPosition:(struct GeolocationPositionData { double x0; double x1; double x2; double x3; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x4; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x5; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x6; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x7; struct Optional<double> { BOOL x0; union constexpr_storage_t<double> { unsigned char x0; double x1; } x1; } x8; } *)a0;

@end
