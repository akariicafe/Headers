@class NSString, SDRDiagnosticReporter, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface VCSymptomReporter : NSObject {
    unsigned int _callID;
    SDRDiagnosticReporter *_diagnosticReporter;
    NSObject<OS_os_log> *_osLogNetworkingHandle;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    void /* function */ *_symptomReporterCallback;
    id _symptomReporterContext;
    BOOL _didSubmitABCSymptom[47];
    BOOL _didShowAlreadyExistFailure[47];
    NSString *_procName;
}

@property (copy, nonatomic) NSString *loggingDirectory;

- (void)dealloc;
- (id)initWithCallID:(unsigned int)a0;
- (int)reportReceiveSessionStatsFailed;
- (int)reportKeyFrameGenerationFailure;
- (int)reportSymptomWithIDSDestination:(id)a0 sessionID:(id)a1 type:(id)a2 subType:(id)a3 context:(id)a4;
- (void)VCSymptomReporterSetCallback:(void /* function */ *)a0 context:(void *)a1;
- (int)reportAlgosScoreWithOptionalDictionary:(id)a0;
- (int)reportAudioStall:(id)a0;
- (int)reportBandwidthEstimationMismatch;
- (int)reportCCReliableDataNotReceived:(id)a0;
- (int)reportConnectionTimeout:(id)a0;
- (int)reportExtendedPoorConnectionWithOptionalDictionary:(id)a0;
- (int)reportFailedToStartAudio;
- (int)reportFailedToStartVideo;
- (int)reportFrameQueueForDecodeHighWaterMarkExceeded;
- (int)reportHighConsecutiveAudioErasuresWithOptionalDictionary:(id)a0;
- (int)reportIDSDataChannelEventUsageError;
- (int)reportInactiveSlotsInChannelSequence;
- (int)reportInvalidTransportType;
- (int)reportInvalidVideoStallTime;
- (int)reportKeyIndexNotReceived;
- (int)reportMKMDecryptionWithOptionalDictionary:(id)a0;
- (int)reportMediaQueueFlushingTooFrequent;
- (int)reportMediaQueueOvershoot;
- (int)reportMediaQueuePoolEmpty;
- (int)reportMediaSymptomSubtypeConnectionWithContext:(id)a0;
- (int)reportNegativeJitterBufferSize;
- (int)reportNoFirstFrameWithOptionalDictionary:(id)a0;
- (int)reportNoMediaBlob;
- (int)reportNoPacketsWithOptionalDictionary:(id)a0;
- (int)reportNoRelayResponseWithOptionalDictionary:(id)a0;
- (int)reportNoSNATMAPResponseWithOptionalDictionary:(id)a0;
- (int)reportNoServerStatsActivity;
- (int)reportOSLogSymptomWithDictionary:(id)a0;
- (int)reportQRATKNTokenError;
- (int)reportRateTargetMismatch;
- (int)reportSessionInfoErrorResponse;
- (int)reportSignalingFailed:(id)a0;
- (int)reportSignificantHandshakeDelayWithOptionalDictionary:(id)a0;
- (int)reportSustainedHighDownlinkPacketLoss;
- (int)reportSustainedHighUplinkPacketLoss;
- (void)reportSymptom:(unsigned int)a0 optionalDictionary:(id)a1;
- (int)reportSymptomInternal:(unsigned int)a0 optionalDictionary:(id)a1;
- (int)reportSymptomWithGroupID:(id)a0 signature:(id)a1 actions:(id)a2;
- (int)reportSymptomWithOptions:(id)a0 type:(id)a1 subType:(id)a2 context:(id)a3;
- (int)reportSymptomWithType:(id)a0 subType:(id)a1 context:(id)a2 actions:(id)a3;
- (int)reportTargetBitrateOvershoot;
- (int)reportTerminateProcessWithOptionalDictionary:(id)a0;
- (int)reportUnexpectedHighRTT;
- (int)reportUnexpectedLowTargetBitrate;
- (int)reportUnexpectedRampUpFrozen;
- (int)reportVideoStall:(id)a0;
- (int)reportVideoSymptom:(id)a0;
- (int)reportVideoSymptom:(id)a0 options:(id)a1;
- (int)requestRemoteSideWithOptions:(id)a0 context:(id)a1 signature:(id)a2;
- (id)symptomNameWithDomain:(id)a0 subtypeContext:(id)a1;

@end
