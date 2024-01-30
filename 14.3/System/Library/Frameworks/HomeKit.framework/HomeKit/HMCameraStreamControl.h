@class NSString, _HMCameraStreamControl, HMCameraStream, HMFUnfairLock;
@protocol HMCameraStreamControlDelegate;

@interface HMCameraStreamControl : HMCameraControl <_HMCameraStreamControlDelegate> {
    HMFUnfairLock *_lock;
}

@property (retain, nonatomic) _HMCameraStreamControl *streamControl;
@property (weak, nonatomic) id<HMCameraStreamControlDelegate> delegate;
@property (readonly, nonatomic) unsigned long long streamState;
@property (readonly, nonatomic) HMCameraStream *cameraStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stopStream;
- (id)initWithStreamControl:(id)a0;
- (void)startStreamWithPreferences:(id)a0;
- (void)cameraStreamControlDidStartStream:(id)a0;
- (void)cameraStreamControl:(id)a0 didStopStream:(id)a1;
- (void)startStream;

@end
