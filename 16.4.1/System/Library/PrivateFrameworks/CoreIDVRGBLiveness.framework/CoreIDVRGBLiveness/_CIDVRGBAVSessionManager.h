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

- (void)dealloc;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)dataOutputSynchronizer:(id)a0 didOutputSynchronizedDataCollection:(id)a1;
- (id)_facesFromMetadataDictionary:(id)a0;
- (id)buildAVSessionCaptureOutputs;
- (void)captureOutput:(id)a0 didFinishRecordingAtURL:(id)a1 error:(id)a2;
- (void)capturePhotoUsingFlashMode:(long long)a0;
- (void)configureAVSessionCaptureOutputs;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getCurrentTimestamp;
- (void)invalidateAVSession;
- (void)pauseFileRecording;
- (void)restartFileRecordingWithCompletionHandler:(id /* block */)a0;
- (void)resumeFileRecording;
- (void)startAVSession;
- (void)stopAVSession;
- (void)stopFileRecording;

@end
