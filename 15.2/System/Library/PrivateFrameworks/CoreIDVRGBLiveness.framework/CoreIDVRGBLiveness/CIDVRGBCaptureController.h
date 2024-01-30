@class NSObject, CIDVRGBCaptureConfig;
@protocol CIDVRGBCaptureDelegate, PADAuditDataRepository, CIDVRGBCaptureImageQualityDelegate, OS_dispatch_queue, CIDVRGBCaptureUICoordinator;

@interface CIDVRGBCaptureController : NSObject {
    CIDVRGBCaptureConfig *_config;
    NSObject<OS_dispatch_queue> *_queue;
    id<PADAuditDataRepository> _audit;
    id<CIDVRGBCaptureUICoordinator> _ui;
    id<CIDVRGBCaptureDelegate> _captureDelegate;
    id<CIDVRGBCaptureImageQualityDelegate> _imageQualityDelegate;
}

- (void)setUi:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)_finishUIWithError:(id)a0;
- (void)_handleResult:(id)a0 error:(id)a1;
- (id)_captureResultFromUIResult:(id)a0;
- (void)_startCaptureUIWithErrorHandler:(id /* block */)a0 successHandler:(id /* block */)a1;
- (void)startLivenessDetectionWithConfig:(id)a0 captureDelegate:(id)a1 imageQualityDelegate:(id)a2;

@end
