@class NSXPCConnection, NSString, HRTFSyncedCaptureSource, NSDictionary, AVCaptureDevice, NSObject, RecordingManager, AVCaptureVideoDataOutput, AVCaptureDeviceFormat;
@protocol OS_dispatch_queue, HRTFEnrollmentSessionDelegate;

@interface HRTFEnrollmentSession : NSObject <HRTFEnrollmentNotificationProtocol, HRTFSyncedCaptureSourceDelegate, RecordingManagerDelegate> {
    union _SessionFlags { unsigned char started : 1; unsigned char cameraCaptureRequested : 1; unsigned char startRequested : 1; unsigned int reserved : 29; unsigned int u32; } _flags;
    NSXPCConnection *_connection;
    HRTFSyncedCaptureSource *_outputSource;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _sessionStartCallback;
    RecordingManager *_recordingManager;
    BOOL _videoCaptureEnabled;
    BOOL _paused;
    AVCaptureVideoDataOutput *_colorDataOutput;
    unsigned int _preferredPixelFormat;
    unsigned int _preferredDepthFormat;
    struct CGSize { double width; double height; } _preferredColorResolution;
    struct CGSize { double width; double height; } _preferredDepthResolution;
    AVCaptureDeviceFormat *_finalColorFormat;
    AVCaptureDeviceFormat *_finalDepthFormat;
    AVCaptureDevice *_device;
}

@property (readonly) NSDictionary *stateInfo;
@property (readonly) unsigned long long resultSize;
@property (weak, nonatomic) id<HRTFEnrollmentSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resumeSession;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pauseSession;
- (void)requestResultDataAtOffset:(unsigned long long)a0 forLength:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)startSession:(BOOL)a0 then:(id /* block */)a1;
- (void)stopSession:(id /* block */)a0;
- (id)getRecordingURL;
- (BOOL)_verifyCaptureDevice:(id)a0;
- (void)assetDownloadSessionProgressUpdate:(id)a0;
- (void)didReceiveVideoData:(id)a0 colorData:(id)a1 depthData:(id)a2 faceObject:(id)a3;
- (void)didStartCaptureSessionWithError:(id)a0;
- (id)getMovFileName;
- (id)getRecordingFolder;
- (void)initializeDevice;
- (void)sessionStarted:(BOOL)a0 error:(id)a1;
- (void)updateResultSize:(unsigned long long)a0;
- (void)updateState:(unsigned long long)a0 withProgress:(float)a1 facePoseStatus:(id)a2 earPoseStatus:(id)a3 errorStatus:(id)a4;

@end
