@class HMDCameraClipUploader, HMICameraVideoAnalyzerResult, NSUUID, HMDCameraRecordingSessionTimelineManager, NSObject, NSDictionary, HMFActivity, HMDCameraProfile, NSString, HMDCameraSignificantEventServer, NSNumber, HMDStreamData, NSData, HMDCameraRecordingSessionSignificantEventManager, HMICameraVideoFragment;
@protocol HMDCameraRecordingSessionVideoAnalyzer, HMDCameraRecordingSessionDelegate, OS_dispatch_queue, HMDCameraRecordingSessionFactory;

@interface HMDCameraRecordingSession : HMFObject <HMFLogging, HMDCameraRecordingSessionVideoAnalyzerDelegate, HMDCameraClipUploaderDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDCameraProfile *camera;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) id<HMDCameraRecordingSessionFactory> factory;
@property (readonly) id<HMDCameraRecordingSessionVideoAnalyzer> videoAnalyzer;
@property (readonly) HMFActivity *sessionActivity;
@property (readonly) HMDCameraSignificantEventServer *significantEventServer;
@property (readonly) HMDCameraRecordingSessionSignificantEventManager *significantEventManager;
@property (readonly) unsigned long long recordingEventTriggers;
@property BOOL noMoreFragmentsAvailable;
@property (getter=isActive) BOOL active;
@property unsigned long long currentFragmentNumber;
@property unsigned long long pendingFragmentsCount;
@property double cumulativeFragmentDuration;
@property double currentClipDuration;
@property (retain) HMDCameraClipUploader *clipUploader;
@property (retain) HMDStreamData *cameraVideoInitFragment;
@property (retain) HMICameraVideoFragment *introFragment;
@property (retain) HMICameraVideoAnalyzerResult *introAnalyzerResult;
@property (retain) NSData *analysisVideoInitData;
@property (copy) NSNumber *remainingRecordingExtensionDuration;
@property (copy) NSString *fragmentDirectoryPath;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) double configuredFragmentDuration;
@property (readonly, copy) NSDictionary *homePresenceByPairingIdentity;
@property (readonly) HMDCameraRecordingSessionTimelineManager *timelineManager;
@property (weak) id<HMDCameraRecordingSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (id)activityZones;
- (id)attributeDescriptions;
- (void)handleFragment:(id)a0;
- (void)handleNoMoreFragmentsAvailable;
- (BOOL)activityZonesIncludedForSignificantEventDetection;
- (id)initWithWorkQueue:(id)a0 camera:(id)a1 configuredFragmentDuration:(double)a2 timelineManager:(id)a3 significantEventServer:(id)a4 homePresenceByPairingIdentity:(id)a5;
- (id)initWithWorkQueue:(id)a0 camera:(id)a1 configuredFragmentDuration:(double)a2 timelineManager:(id)a3 significantEventServer:(id)a4 homePresenceByPairingIdentity:(id)a5 factory:(id)a6;
- (BOOL)_isValidFirstSessionFragment:(id)a0;
- (void)_writeFragment:(id)a0;
- (BOOL)_isValidNonFirstSessionFragment:(id)a0;
- (void)_endSessionWithError:(id)a0;
- (void)_handleFragment:(id)a0 withResult:(id)a1;
- (void)_handleDidFailAnalysisForFragment:(id)a0 withError:(id)a1;
- (BOOL)_shouldRecordFragmentWithAnalyzerResult:(id)a0 sequenceNumber:(unsigned long long)a1 recordingEventTriggers:(unsigned long long)a2 fragmentAnalyzedEvent:(id)a3;
- (void)_finishCurrentClipUploader;
- (void)_notifyForAnalyzerResult:(id)a0 fragment:(id)a1 dateOfOccurrence:(id)a2 timeOffsetWithinClip:(double)a3 recordingEventTriggers:(unsigned long long)a4;
- (void)_uploadFragment:(id)a0 withDuration:(double)a1 posterFrames:(id)a2 clipFinalizedBecauseMaxDurationExceeded:(BOOL)a3;
- (BOOL)_shouldEndSession;
- (void)_notifyForSignificantEvent:(id)a0 recordingEventTriggers:(unsigned long long)a1 fragmentNumber:(unsigned long long)a2;
- (void)_submitNotificationSuccessMetricWithRecordingEventTriggers:(unsigned long long)a0 fragmentNumber:(unsigned long long)a1;
- (void)analyzer:(id)a0 didAnalyzeFragment:(id)a1 withResult:(id)a2;
- (void)analyzer:(id)a0 didNotAnalyzeFragment:(id)a1 withResult:(id)a2;
- (void)analyzer:(id)a0 didFailAnalysisForFragment:(id)a1 withError:(id)a2;
- (void)uploaderDidFailUpload:(id)a0;

@end
