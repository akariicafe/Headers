@interface CAMCaptureConversions : NSObject

+ (long long)AVDevicePositionForCAMDevicePosition:(long long)a0;
+ (long long)captureDigitalFlashModeForLowLightMode:(long long)a0;
+ (long long)AVCapturePhotoQualityPrioritizationForCAMPhotoQualityPrioritization:(long long)a0;
+ (long long)flashModeForCaptureFlashMode:(long long)a0;
+ (long long)torchModeForCaptureTorchMode:(long long)a0;
+ (long long)captureHDRModeForHDRMode:(long long)a0;
+ (long long)whiteBalanceModeForCaptureWhiteBalanceMode:(long long)a0;
+ (long long)captureWhiteBalanceModeForWhiteBalanceMode:(long long)a0;
+ (long long)captureFocusModeForFocusMode:(long long)a0 isPerformingContrastBasedFocus:(BOOL)a1;
+ (long long)overCapturePreviewStatusForAVPreviewStatus:(long long)a0;
+ (long long)shallowDepthOfFieldStatusForCaptureStatus:(long long)a0;
+ (long long)CAMDevicePositionForAVDevicePosition:(long long)a0;
+ (long long)hdrModeForCaptureHDRMode:(long long)a0;
+ (long long)captureFlashModeForFlashMode:(long long)a0;
+ (long long)stagePreviewStatusForCaptureStatus:(long long)a0;
+ (long long)torchModeForFlashMode:(long long)a0;
+ (long long)lowLightStatusForCaptureStatus:(long long)a0;
+ (long long)exposureModeForCaptureExposureMode:(long long)a0;
+ (long long)CAMPhotoQualityPrioritizationForAVCapturePhotoQualityPrioritization:(long long)a0;
+ (long long)viewContentModeForPreviewViewAspectMode:(long long)a0;
+ (id)AVCaptureDeviceTypeForCAMCaptureDevice:(long long)a0;
+ (id)previewLayerVideoGravityForPreviewViewAspectMode:(long long)a0;
+ (long long)captureTorchModeForTorchMode:(long long)a0;
+ (long long)captureExposureModeForExposureMode:(long long)a0;
+ (long long)focusModeForCaptureFocusMode:(long long)a0;
+ (long long)flashModeForTorchMode:(long long)a0;

@end
