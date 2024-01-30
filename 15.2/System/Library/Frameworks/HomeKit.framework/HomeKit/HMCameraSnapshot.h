@class _HMCameraSnapshot, NSDate;

@interface HMCameraSnapshot : HMCameraSource

@property (retain, nonatomic) _HMCameraSnapshot *snapshot;
@property (readonly, copy, nonatomic) NSDate *captureDate;

- (void).cxx_destruct;
- (id)initWithSnapshot:(id)a0;

@end
