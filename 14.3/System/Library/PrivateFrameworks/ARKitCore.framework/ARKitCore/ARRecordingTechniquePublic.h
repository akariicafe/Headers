@class NSError, NSString, NSURL, MOVWriterInterface, NSMutableDictionary, NSObject, NSMutableSet, ARParentImageSensorSettings;
@protocol ARRecordingTechniqueDelegate, OS_dispatch_queue;

@interface ARRecordingTechniquePublic : ARTechnique <MOVWriterInterfaceDelegate, ARRecordingTechniqueProtocol> {
    NSObject<OS_dispatch_queue> *_masterQueue;
    NSObject<OS_dispatch_queue> *_timeSensitiveQueue;
    MOVWriterInterface *_writer;
    unsigned long long _sensorDataTypes;
    double _sessionSourceTime;
    BOOL _writerReady;
    NSMutableDictionary *_lastRecordedTimestamps;
    NSError *_finishedError;
    BOOL _recordCollaborationData;
    NSMutableSet *_knownVIOSessionIDs;
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
+ (id)metadataIdentifierForARSensorDataClass:(Class)a0 error:(id *)a1;
+ (id)metadataIdentifierForARRecordableResultsClass:(Class)a0;

- (void)startRecording;
- (BOOL)finished;
- (id)init;
- (void).cxx_destruct;
- (id)processData:(id)a0;
- (void)dealloc;
- (void)_fail:(id)a0;
- (void)didFailWithError:(id)a0;
- (void)_finish:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeImageData:(id)a0;
- (void)_startRecording;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithFileURL:(id)a0 sensorDataTypes:(unsigned long long)a1;
- (id)initWithFileURL:(id)a0 recordingSensorDataTypes:(unsigned long long)a1;
- (id)initWithFileURL:(id)a0 recordingSensorDataTypes:(unsigned long long)a1 startImmediately:(BOOL)a2 recordCollaborationData:(BOOL)a3;
- (void)processTimeSensitiveNSCoderObject:(id)a0 withTimestamp:(double)a1 metadataID:(id)a2;
- (void)_finishRecording;
- (void)writeAudioData:(id)a0;
- (void)writeTimeOfFlightData:(id)a0;
- (void)writeSensorData:(id)a0;
- (BOOL)allowedToWrite;
- (void)removeTemporaryVideoFile;
- (id)createFileMetadata;
- (void)setupSensorTracks;
- (void)setupCustomTrack;
- (void)writeDepthMap:(id)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)copyVideoToPhotoLibrary;
- (void)isReadyToRecord;
- (void)didFinishRecording;
- (void)recordCustomData:(id)a0 forTimestamp:(double)a1;
- (void)recordCollaborationData:(id)a0 localSession:(BOOL)a1;
- (void)recordAddedAnchor:(id)a0;
- (void)recordRemovedAnchor:(id)a0;
- (void)finishRecording;
- (void)abortRecording;
- (void)writeResultData:(id)a0 withTimestamp:(double)a1;

@end
