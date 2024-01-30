@class CAMCaptureEngine, AVCaptureDevice, AVCaptureVideoPreviewLayer, AVCaptureMetadataOutput, AVCaptureDeviceInput, CAMPanoramaOutput, NSString, AVCaptureMovieFileOutput, AVCaptureVideoDataOutput, AVCaptureSession, AVCaptureDeviceFormat, AVCapturePhotoOutput, CAMPanoramaConfiguration, AVCaptureVideoThumbnailOutput;
@protocol AVCapturePhotoCaptureDelegate, AVMomentCaptureMovieRecordingDelegate, AVCaptureFileOutputRecordingDelegate;

@interface CAMCaptureCommandContext : NSObject

@property (readonly, weak, nonatomic) CAMCaptureEngine *_captureEngine;
@property (retain, nonatomic) AVCaptureSession *currentCaptureSession;
@property (retain, nonatomic) AVCaptureDevice *currentVideoDevice;
@property (retain, nonatomic) AVCaptureDeviceFormat *currentVideoDeviceFormat;
@property (retain, nonatomic) AVCaptureDeviceFormat *currentDepthDataFormat;
@property (retain, nonatomic) NSString *currentVideoDevicePreset;
@property (retain, nonatomic) AVCaptureDeviceInput *currentVideoDeviceInput;
@property (retain, nonatomic) AVCaptureDevice *currentAudioDevice;
@property (retain, nonatomic) AVCaptureDeviceInput *currentAudioDeviceInput;
@property (retain, nonatomic) AVCapturePhotoOutput *currentStillImageOutput;
@property (retain, nonatomic) AVCaptureMovieFileOutput *currentMovieFileOutput;
@property (retain, nonatomic) CAMPanoramaOutput *currentPanoramaOutput;
@property (retain, nonatomic) AVCaptureMetadataOutput *currentMetadataOutput;
@property (retain, nonatomic) AVCaptureVideoDataOutput *currentEffectsPreviewOutput;
@property (retain, nonatomic) AVCaptureVideoThumbnailOutput *currentVideoThumbnailOutput;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *currentVideoPreviewLayer;
@property (readonly, weak, nonatomic) id<AVCaptureFileOutputRecordingDelegate> currentRecordingDelegate;
@property (readonly, nonatomic) CAMPanoramaConfiguration *currentPanoramaConfiguration;
@property (readonly, weak, nonatomic) id<AVCapturePhotoCaptureDelegate> currentStillImageDelegate;
@property (readonly, weak, nonatomic) id<AVMomentCaptureMovieRecordingDelegate> currentMomentCaptureMovieRecordingDelegate;

- (id)_captureEngineDeviceForMode:(long long)a0 desiredDevice:(long long)a1 videoConfiguration:(long long)a2 videoStabilizationStrength:(long long)a3 resolvedDevice:(long long *)a4;
- (id)primaryOutputForMode:(long long)a0;
- (void)stopPanoramaCaptureInterrupted:(BOOL)a0;
- (void)startPanoramaCaptureWithRequest:(id)a0;
- (id)initWithCaptureEngine:(id)a0;
- (id)audioDeviceInput;
- (void)registerVideoEndZoomFactor:(double)a0;
- (void)registerStillImageCaptureRequest:(id)a0 withSettings:(id)a1;
- (id)cachedMomentCaptureSettingsForIdentifier:(id)a0;
- (id)videoDeviceForMode:(long long)a0 desiredDevice:(long long)a1 videoConfiguration:(long long)a2 videoStabilizationStrength:(long long)a3 resolvedDevice:(long long *)a4;
- (id)outputsForGraphConfiguration:(id)a0;
- (void)cacheMomentCaptureSettings:(id)a0 forIdentifier:(id)a1;
- (void)clearCachedMomentCaptureSettingsForIdentifier:(id)a0;
- (void)clear;
- (id)_metadataOutputForMode:(long long)a0;
- (void).cxx_destruct;
- (void)registerVideoCaptureRequest:(id)a0;

@end
