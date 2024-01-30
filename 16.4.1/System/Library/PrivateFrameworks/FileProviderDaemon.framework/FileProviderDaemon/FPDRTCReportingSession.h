@class NSString, FPDRTCReportingSessionManager, NSMutableDictionary;
@protocol FPDRTCReportingObserver;

@interface FPDRTCReportingSession : NSObject {
    NSString *_providerID;
    NSString *_providerVersion;
    FPDRTCReportingSessionManager *_backingManager;
    id<FPDRTCReportingObserver> _observer;
    NSString *_trialExperiment;
    NSString *_trialTreatment;
    NSMutableDictionary *_categoryHooks;
}

- (void)setObserver:(id)a0;
- (void)flushMessagesWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (void)executeModifyDecoratedPayloadHook:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 error:(id)a3 decoratedPayload:(id)a4;
- (BOOL)flushMessagesSynchronouslyWithError:(id *)a0;
- (id)initWithProviderID:(id)a0 version:(id)a1 manager:(id)a2;
- (void)postReportWithCategory:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 error:(id)a3;
- (void)setModifyDecoratedPayloadHook:(id /* block */)a0 forCategory:(unsigned long long)a1;
- (id)truncateProviderVersion:(id)a0;

@end
