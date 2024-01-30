@class NSMutableArray, NSString, NSObject, HMDCameraSignificantEventFaceClassificationResolver;
@protocol OS_dispatch_queue;

@interface HMDCameraRecordingSessionSignificantEventManager : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver;
@property (readonly) NSMutableArray *significantEvents;
@property (copy) id /* block */ significantEventUUIDFactory;
@property (copy) id /* block */ faceClassificationUUIDFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)resetState;
- (id)_significantEventsForFrameResult:(id)a0 dateOfOccurrence:(id)a1 timeOffsetWithinClip:(double)a2 recordingEventTriggers:(unsigned long long)a3;
- (id)_significantEventsForEmptyAnalyzerResult:(id)a0 dateOfOccurrence:(id)a1 timeOffsetWithinClip:(double)a2;
- (id)_significantEventsForAnalyzerEvent:(id)a0 dateOfOccurrence:(id)a1 heroFrameData:(id)a2 timeOffsetWithinClip:(double)a3 recordingEventTriggers:(unsigned long long)a4;
- (id)_filteredAndUpdatedSignificantEventsFromSignificantEvents:(id)a0;
- (id)_faceRecognitionSignificantEventsForAnalyzerEvent:(id)a0 dateOfOccurrence:(id)a1 heroFrameData:(id)a2 timeOffsetWithinClip:(double)a3 confidenceLevel:(unsigned long long)a4;
- (id)_filteredFaceClassificationsFromFaceClassifications:(id)a0;
- (id)initWithWorkQueue:(id)a0 faceClassificationResolver:(id)a1 logIdentifier:(id)a2;
- (BOOL)isAnyEventInAnalyzerResult:(id)a0 includedInRecordingEventTriggers:(unsigned long long)a1;
- (id)significantEventsForAnalyzerResult:(id)a0 dateOfOccurrence:(id)a1 timeOffsetWithinClip:(double)a2 recordingEventTriggers:(unsigned long long)a3;

@end
