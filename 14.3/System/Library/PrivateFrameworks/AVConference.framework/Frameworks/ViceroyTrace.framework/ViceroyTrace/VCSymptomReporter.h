@class NSString, SDRDiagnosticReporter, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface VCSymptomReporter : NSObject {
    unsigned int _callID;
    SDRDiagnosticReporter *_diagnosticReporter;
    NSObject<OS_os_log> *_osLogNetworkingHandle;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    void /* function */ *_symptomReporterCallback;
    id _symptomReporterContext;
}

@property (copy, nonatomic) NSString *loggingDirectory;

- (void)dealloc;
- (id)initWithCallID:(unsigned int)a0;
- (void)reportSymptomInternal:(unsigned int)a0 optionalDictionary:(id)a1;
- (int)reportRateTargetMismatch;
- (int)reportBandwidthEstimationMismatch;
- (int)reportNoMediaBlob;
- (int)reportSignalingFailed;
- (int)reportConnectionTimeout;
- (int)reportNoRelayResponseWithOptionalDictionary:(id)a0;
- (int)reportNoSNATMAPResponseWithOptionalDictionary:(id)a0;
- (int)reportFailedToStartAudio;
- (int)reportFailedToStartVideo;
- (int)reportNoFirstFrameWithOptionalDictionary:(id)a0;
- (int)reportNoPacketsWithOptionalDictionary:(id)a0;
- (int)reportAudioStall;
- (int)reportVideoStall;
- (int)reportAudioErasures;
- (int)reportNegativeJitterBufferSize;
- (int)reportAUIOTimestampJumped;
- (int)reportIDSDataChannelEventUsageError;
- (int)reportQRATKNTokenError;
- (int)reportReceiveSessionStatsFailed;
- (int)reportCCReliableDataNotReceived;
- (int)reportSessionInfoErrorResponse;
- (int)reportKeyIndexNotReceived;
- (int)reportMediaQueuePoolEmpty;
- (int)reportTargetBitrateOvershoot;
- (int)reportUnexpectedLowTargetBitrate;
- (int)reportKeyFrameNotSpreading;
- (int)reportMediaQueueOvershoot;
- (int)reportMediaQueueFlushingTooFrequent;
- (int)reportHighConsecutiveAudioErasures;
- (int)reportHighTargetQueueSize;
- (int)reportUnexpectedHighRTT;
- (int)reportInvalidTransportType;
- (int)reportInactiveSlotsInChannelSequence;
- (int)reportOptedOutAndInToSameVideoStreamID;
- (int)reportSymptomWithType:(id)a0 subType:(id)a1 context:(id)a2 actions:(id)a3;
- (id)symptomNameWithDomain:(id)a0 subtypeContext:(id)a1;
- (int)reportSymptomWithDictionary:(id)a0;
- (int)reportSymptomWithOptions:(id)a0 type:(id)a1 subType:(id)a2 context:(id)a3;
- (void)reportSymptom:(unsigned int)a0 optionalDictionary:(id)a1;
- (void)VCSymptomReporterSetCallback:(void /* function */ *)a0 context:(void *)a1;
- (int)reportSymptomWithIDSDestination:(id)a0 sessionID:(id)a1 type:(id)a2 subType:(id)a3 context:(id)a4;

@end
