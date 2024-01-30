@class AVCaptureSession, NSString, AVCaptureDevice, AVCapturePhotoOutput, AVCaptureVideoDataOutput, NSObject, AVCaptureConnection;
@protocol OS_dispatch_queue, VKAVCaptureDelegate;

@interface VKAVCapture : NSObject <VKZoomable> {
    NSObject<OS_dispatch_queue> *_queue;
    id<VKAVCaptureDelegate> _delegate;
    AVCaptureSession *_session;
    AVCaptureConnection *_connection;
    AVCaptureDevice *_device;
    AVCapturePhotoOutput *_photoOutput;
    AVCaptureVideoDataOutput *_videoDataOutput;
    unsigned long long _preparationState;
}

@property (readonly, nonatomic) double minZoomFactor;
@property (readonly, nonatomic) double maxZoomFactor;
@property (nonatomic) double zoomFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
