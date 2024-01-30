@class NSString, NSDictionary, CSPreMyriadVoiceTriggerMetaData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CSVoiceTriggerDelegate, CSSecondPassProgressProviding;

@interface CSPreMyriadCoordinator : NSObject <CSVoiceTriggerDelegate, CSSecondPassProgressDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain, nonatomic) NSDictionary *pendingRemoraVoiceTriggerResult;
@property (retain, nonatomic) NSString *pendingRemoraVoiceTriggerDeviceId;
@property (copy, nonatomic) id /* block */ pendingRemoraVoiceTriggerCompletionBlk;
@property (nonatomic) unsigned long long pendingRemoraVoiceTriggerDetectedTime;
@property (retain, nonatomic) NSDictionary *pendingBuiltInVoiceTriggerResult;
@property (copy, nonatomic) id /* block */ pendingBuiltInVoiceTriggerCompletionBlk;
@property (nonatomic) unsigned long long pendingBuiltInVoiceTriggerDetectedTime;
@property (retain, nonatomic) CSPreMyriadVoiceTriggerMetaData *builtInVoiceTriggerMetaData;
@property (retain, nonatomic) NSMutableDictionary *accessoryVoiceTriggerMetaDataByDeviceId;
@property (weak, nonatomic) id<CSVoiceTriggerDelegate> delegate;
@property (weak, nonatomic) id<CSSecondPassProgressProviding> builtInSeconPassProgressProvider;
@property (weak, nonatomic) id<CSSecondPassProgressProviding> remoraSecondPassProgressProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTargetQueue:(id)a0;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)raiseToSpeakDetected:(id)a0;
- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1 completion:(id /* block */)a2;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerGotSuperVector:(id)a0;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void).cxx_destruct;
- (void)_clearPendingRemoraVoiceTrigger;
- (void)_clearPendingBuiltInVoiceTrigger;
- (void)_getHighestRemoraFirstPassGoodnessScore:(id /* block */)a0;
- (BOOL)_isRemoraSecondPassRunning;
- (BOOL)handlePendingBuiltInVoiceTriggerIfNeeded;
- (BOOL)handlePendingRemoraVoiceTriggerIfNeeded;
- (BOOL)isBultInVoiceTriggerEvent:(id)a0;
- (BOOL)isRemoraVoiceTriggerEvent:(id)a0;
- (void)secondPassDidStartForClient:(unsigned long long)a0 deviceId:(id)a1 withFirstPassEstimate:(double)a2;
- (void)secondPassDidStopForClient:(unsigned long long)a0 deviceId:(id)a1;

@end
