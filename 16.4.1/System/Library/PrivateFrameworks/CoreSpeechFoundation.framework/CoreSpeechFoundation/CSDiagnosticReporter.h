@class SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue;

@interface CSDiagnosticReporter : NSObject

@property (retain, nonatomic) SDRDiagnosticReporter *reporter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)submitAudioIssueReport:(id)a0;
- (void)submitAudioIssueReport:(id)a0 withError:(id)a1;
- (void)submitDiagnosticReportWithType:(id)a0 withSubType:(id)a1 withDuration:(double)a2 withContext:(id)a3;
- (void)submitDiagnosticReportWithType:(id)a0 withSubType:(id)a1 withSubTypeContext:(id)a2 withDuration:(double)a3 withContext:(id)a4;
- (void)submitEndpointerIssueReport:(id)a0;
- (void)submitRemoteCoreSpeechIssueReport:(id)a0 context:(id)a1;
- (void)submitSiriPowerIssueReport:(id)a0;
- (void)submitTrialIssueReport:(id)a0;
- (void)submitUresIssueReport:(id)a0;
- (void)submitVoiceIdIssueReport:(id)a0;
- (void)submitVoiceTriggerIssueReport:(id)a0;

@end
