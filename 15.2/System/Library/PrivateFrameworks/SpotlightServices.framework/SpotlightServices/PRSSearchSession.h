@class NSString, PARSession, NSArray, NSSet, PRSFeedbackProxy, NSDictionary, NSMutableArray, NSObject, SSPlistDataReader;
@protocol SFFeedbackListener, PRSSessionController, OS_dispatch_source, OS_dispatch_queue;

@interface PRSSearchSession : NSObject <PARSessionDelegate> {
    NSMutableArray *_feedback;
    id<PRSSessionController> _client;
    double _lastQueryTime;
    NSString *_queryLanguage;
    NSDictionary *_sqfData;
    NSDictionary *_serverFeatures;
    BOOL _parsecFeedbackAllowed;
    PRSFeedbackProxy *_listener;
}

@property (retain) PARSession *session;
@property (retain) NSString *userAgent;
@property BOOL configuredSession;
@property (retain) NSObject<OS_dispatch_source> *quiescenceTimer;
@property double retryAfter;
@property (readonly, nonatomic) id<SFFeedbackListener> listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) double sessionStartTime;
@property (readonly, nonatomic) double searchRenderTimeout;
@property (readonly, nonatomic) double suggestionsRenderTimeout;
@property (readonly, nonatomic) NSArray *supportedServices;
@property (readonly, nonatomic) NSSet *appBlocklist;
@property (readonly, nonatomic) SSPlistDataReader *cepDictionary;
@property (readonly, nonatomic) SSPlistDataReader *cannedCEPValues;
@property (readonly, nonatomic) NSString *modelL2Version;
@property (readonly, nonatomic) NSString *experimentNamespaceId;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL isClientOnlyExperiment;
@property (readonly, nonatomic) BOOL isInReservedAllocationForExperiment;
@property (readonly, nonatomic) BOOL disableAsTypedSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getFTEStringsWithReply:(id /* block */)a0;
- (void)setUserAgentString:(id)a0;
- (id)feedbackListener;
- (void)warmup;
- (void)session:(id)a0 bag:(id)a1 didLoadWithError:(id)a2;
- (void)setParsecFeedbackAllowed:(BOOL)a0;
- (void)setFeedbackStartTime;
- (id)initWithClient:(id)a0 clientQueue:(id)a1 config:(id)a2 session:(id)a3;
- (void)getCachedQueries:(id *)a0 results:(id *)a1 webSearch:(BOOL)a2;
- (void)setQueryLanguage:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)shrinkCaches;
- (id)initWithClient:(id)a0 clientQueue:(id)a1;
- (void)queryCompleted:(id)a0;
- (void)deactivate;
- (id)queryTaskWithString:(id)a0 externalId:(unsigned int)a1 handler:(id)a2 queryContext:(id)a3 queryIdent:(unsigned long long)a4;
- (id)getQueryTaskForHandler:(id)a0 scaleFactor:(double)a1 whyQuery:(unsigned long long)a2;
- (id)queryTaskWithEngagedSuggestion:(id)a0 externalId:(unsigned int)a1 handler:(id)a2 queryContext:(id)a3 queryIdent:(unsigned long long)a4;

@end
