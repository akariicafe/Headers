@class NSString, _HMCameraStreamControl, HMCameraStream;
@protocol HMCameraStreamControlDelegate;

@interface HMCameraStreamControl : HMCameraControl <_HMCameraStreamControlDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) _HMCameraStreamControl *streamControl;
@property (weak, nonatomic) id<HMCameraStreamControlDelegate> delegate;
@property (readonly, nonatomic) unsigned long long streamState;
@property (readonly, nonatomic) HMCameraStream *cameraStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)startStream;
- (void)cameraStreamControl:(id)a0 didStopStream:(id)a1;
- (void)cameraStreamControlDidStartStream:(id)a0;
- (id)initWithStreamControl:(id)a0;
- (void)startStreamWithPreferences:(id)a0;
- (void)stopStream;

@end
