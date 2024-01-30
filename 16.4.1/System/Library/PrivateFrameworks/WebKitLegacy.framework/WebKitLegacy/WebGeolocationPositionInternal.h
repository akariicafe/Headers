@interface WebGeolocationPositionInternal : NSObject {
    struct GeolocationPositionData { double timestamp; double latitude; double longitude; double accuracy; struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } altitude; struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } altitudeAccuracy; struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } heading; struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } speed; struct optional<double> { union { char __null_state_; double __val_; } ; BOOL __engaged_; } floorLevel; } _position;
}

- (id).cxx_construct;
- (id)initWithCoreGeolocationPosition:(void *)a0;

@end
