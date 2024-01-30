@class HMFUnfairLock, _HMCameraSource;

@interface HMCameraSource : NSObject {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) _HMCameraSource *source;
@property (readonly) double currentAspectRatio;
@property (readonly) double aspectRatio;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0;

@end
