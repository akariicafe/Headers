@class VIAFeedbackSubmitter, NSString, NSMutableDictionary, VIAEventCache, NSObject;
@protocol OS_dispatch_queue;

@interface VIAEntryPointLogger : NSObject <VIAEventLogging> {
    NSObject<OS_dispatch_queue> *_queue;
    VIAFeedbackSubmitter *_feedbackSubmitter;
    NSMutableDictionary *_appToQueryIDMap;
    VIAEventCache *_eventCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedbackNamesToLog;

- (void)_logEvent:(id)a0;
- (void).cxx_destruct;
- (void)logEvent:(id)a0;
- (void)_logStartEvent:(id)a0;
- (void)_logDependentEvent:(id)a0;
- (void)_logEndEvent:(id)a0;
- (void)_logFeedback:(id)a0 queryID:(unsigned long long)a1;
- (BOOL)_preconditionCheckEvent:(id)a0;
- (void)didObserveEvent:(id)a0;
- (id)initWithQueue:(id)a0 feedbackSubmitter:(id)a1 eventCache:(id)a2;

@end
