@class SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue;

@interface IMMetricsCollector : NSObject {
    SDRDiagnosticReporter *_diagnosticReporter;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;

+ (id)sharedInstance;

- (BOOL)trackEvent:(id)a0 withStatistic:(id)a1;
- (void)_trackEvent:(id)a0;
- (void)_trackEvent:(id)a0 withDictionary:(id)a1;
- (void *)_ADClientAddValueForScalarKeyApiInit;
- (void)autoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1;
- (id)_stringForSpamType:(unsigned long long)a0;
- (void)_trackEvent:(id)a0 withCount:(id)a1;
- (id)init;
- (BOOL)trackEvent:(id)a0;
- (void)metricAttachmentValidation:(BOOL)a0 attachmentSize:(id)a1 operationalErrorDomain:(id)a2 operationalErrorCode:(id)a3 validationErrorDomain:(id)a4 validationErrorCode:(id)a5;
- (void)forceAutoBugCaptureWithSubType:(id)a0 errorPayload:(id)a1;
- (BOOL)trackEvent:(id)a0 withCount:(id)a1;
- (void)dealloc;
- (void)trackSpamEvent:(unsigned long long)a0 withDictionary:(id)a1;
- (void)_trackEvent:(id)a0 withStatistic:(id)a1;
- (void *)_ADClientPushValueForDistributionKeyApiInit;
- (BOOL)trackEvent:(id)a0 withDictionary:(id)a1;
- (void *)_ADClientSetValueForScalarKeyApiInit;
- (void)trackSpamEvent:(unsigned long long)a0;

@end
