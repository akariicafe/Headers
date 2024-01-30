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

- (id)encryptionKey;
- (BOOL)isComplete;
- (double)duration;
- (void).cxx_destruct;
- (BOOL)canAskForUserFeedback;
- (double)targetFragmentDuration;
- (id)videoAssetRequiredHTTPHeaders;
- (id)hf_dateInterval;
- (double)hf_duration;
- (id)hf_endDate;
- (BOOL)hf_isPlayable;
- (id)initWithStartEvent:(id)a0;

@end
