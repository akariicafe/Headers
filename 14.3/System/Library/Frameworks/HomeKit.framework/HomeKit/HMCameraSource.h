@class HMFUnfairLock, _HMCameraSource;

@interface HMCameraSource : NSObject {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) _HMCameraSource *source;

- (id)initWithSource:(id)a0;
- (void).cxx_destruct;
- (id)aspectRatio;

@end
