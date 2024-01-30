@class SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue;

@interface CSDiagnosticReporter : NSObject

@property (retain, nonatomic) SDRDiagnosticReporter *reporter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)submitVoiceTriggerIssueReport:(id)a0;
- (void)submitAudioIssueReport:(id)a0;
- (void)submitEndpointerIssueReport:(id)a0;
- (void)submitSiriPowerIssueReport:(id)a0;
- (void)submitVoiceIdIssueReport:(id)a0;
- (void)submitDiagnosticReportWithType:(id)a0 withSubType:(id)a1 withDuration:(double)a2 withContext:(id)a3;
- (void)submitTrialIssueReport:(id)a0;
- (void)submitUresIssueReport:(id)a0;

@end
