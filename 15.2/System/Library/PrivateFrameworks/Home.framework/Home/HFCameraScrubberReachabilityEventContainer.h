@class NSString, NSUUID, NSDate;
@protocol HFCameraRecordingEvent;

@interface HFCameraScrubberReachabilityEventContainer : NSObject <HFCameraRecordingEvent>

@property (readonly, nonatomic) id<HFCameraRecordingEvent> startEvent;
@property (retain, nonatomic) id<HFCameraRecordingEvent> endEvent;
@property (readonly, nonatomic) unsigned long long containerType;
@property (readonly, copy, nonatomic) NSString *displayDescription;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isComplete;
- (id)encryptionKey;
- (void).cxx_destruct;
- (double)duration;
- (double)targetFragmentDuration;
- (id)posterFrames;
- (id)videoAssetRequiredHTTPHeaders;
- (BOOL)canAskForUserFeedback;
- (id)initWithStartEvent:(id)a0;
- (double)hf_duration;
- (id)hf_endDate;
- (id)hf_dateInterval;
- (BOOL)hf_isPlayable;

@end
