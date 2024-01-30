@class AVCaptureMetadataOutput, NSString, AVCaptureDataOutputSynchronizer, AVCapturePhotoOutput, CIDVRGBAVCaptureFileOutput, NSArray, AVCaptureVideoDataOutput;

@interface _CIDVRGBAVSessionManager : _CIDVRGBAVSessionManagerBase <AVCapturePhotoCaptureDelegate, AVCaptureDataOutputSynchronizerDelegate, CIDVRGBAVCaptureFileOutputDelegate> {
    AVCaptureDataOutputSynchronizer *_dataSynchronizer;
    AVCapturePhotoOutput *_photoOutput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCaptureVideoDataOutput *_videoOutput;
    CIDVRGBAVCaptureFileOutput *_fileOutput;
    unsigned long long _fps;
    BOOL _hasReceivedFirstFrame;
    BOOL _shouldWriteFrame;
    NSArray *lastFrameFaces;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)dataOutputSynchronizer:(id)a0 didOutputSynchronizedDataCollection:(id)a1;
- (void)startAVSession;
- (void)stopAVSession;
- (void)pauseFileRecording;
- (void)resumeFileRecording;
- (void)stopFileRecording;
- (void)restartFileRecordingWithCompletionHandler:(id /* block */)a0;
- (void)invalidateAVSession;
- (id)buildAVSessionCaptureOutputs;
- (void)configureAVSessionCaptureOutputs;
- (void)capturePhotoUsingFlash:(BOOL)a0;
- (id)_facesFromMetadataDictionary:(id)a0;
- (void)captureOutput:(id)a0 didFinishRecordingAtURL:(id)a1 error:(id)a2;

@end
