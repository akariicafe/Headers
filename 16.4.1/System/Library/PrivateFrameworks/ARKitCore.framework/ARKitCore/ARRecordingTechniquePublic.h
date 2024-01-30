@class NSError, NSString, NSURL, MOVWriterInterface, NSMutableDictionary, NSObject, NSMutableSet, ARParentImageSensorSettings;
@protocol ARRecordingTechniqueDelegate, OS_dispatch_queue;

@interface ARRecordingTechniquePublic : ARTechnique <MOVWriterInterfaceDelegate, ARRecordingTechniqueProtocol> {
    NSObject<OS_dispatch_queue> *_recordingQueue;
    NSObject<OS_dispatch_queue> *_timeSensitiveQueue;
    MOVWriterInterface *_writer;
    unsigned long long _sensorDataTypes;
    double _sessionSourceTime;
    BOOL _writerReady;
    NSMutableDictionary *_lastRecordedTimestamps;
    NSError *_finishedError;
    BOOL _recordCollaborationData;
    NSMutableSet *_knownVIOSessionIDs;
    BOOL _recordPearlDepthData;
    struct __CVBuffer { } *_pearlFixedPointUnsigned13_3PixelBuffer;
}

@property unsigned long long state;
@property (readonly, nonatomic) NSURL *outputFileURL;
@property (nonatomic) BOOL expectDepthData;
@property (nonatomic) BOOL expectAudioData;
@property (nonatomic) BOOL expectCustomData;
@property (nonatomic) BOOL shouldSaveVideoInPhotosLibrary;
@property (weak) id<ARRecordingTechniqueDelegate> recordingTechniqueDelegate;
@property (readonly, nonatomic) unsigned long long recordingSensorDataTypes;
@property (retain, nonatomic) ARParentImageSensorSettings *parentImageSensorSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (BOOL)finished;
- (void)_finish:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)startRecording;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)processData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_startRecording;
- (void)isReadyToRecord;
- (void)writeAudioData:(id)a0;
- (void)finishRecording;
- (void)writeImageData:(id)a0;
- (void)_fail:(id)a0;
- (void)_finishRecording;
- (void)abortRecording;
- (BOOL)allowedToWrite;
- (id)createFileMetadata;
- (void)didFinishRecording;
- (id)initWithFileURL:(id)a0 recordingSensorDataTypes:(unsigned long long)a1;
- (id)initWithFileURL:(id)a0 recordingSensorDataTypes:(unsigned long long)a1 startImmediately:(BOOL)a2 recordCollaborationData:(BOOL)a3;
- (id)initWithFileURL:(id)a0 sensorDataTypes:(unsigned long long)a1;
- (void)processTimeSensitiveNSCoderObject:(id)a0 withTimestamp:(double)a1 metadataID:(id)a2;
- (void)recordAddedAnchor:(id)a0;
- (void)recordCollaborationData:(id)a0 localSession:(BOOL)a1;
- (void)recordCustomData:(id)a0 forTimestamp:(double)a1;
- (void)recordRemovedAnchor:(id)a0;
- (void)removeTemporaryVideoFile;
- (unsigned long long)requiredSensorDataTypes;
- (void)setupCustomTrack;
- (void)setupSensorTracks;
- (void)writePearlDepthData:(id)a0 withTimestamp:(double)a1 fromCaptureDevice:(id)a2;
- (void)writeResultData:(id)a0 withTimestamp:(double)a1;
- (void)writeSensorData:(id)a0;
- (void)writeTimeOfFlightData:(id)a0;

@end
