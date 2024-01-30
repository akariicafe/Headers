@class WBSParsecABGroupManager, NSString, WBSCompletionQuery, PARSession, GEOUserSessionEntity, NSObject, WBSParsecDFeedbackDispatcher;
@protocol OS_dispatch_queue, WBSParsecFeedbackDispatcher, WBSParsecSearchSessionDelegate;

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession> {
    NSObject<OS_dispatch_queue> *_requestProcessingQueue;
    WBSParsecDFeedbackDispatcher *_feedbackDispatcher;
    GEOUserSessionEntity *_threadUnsafeGEOUserSessionEntity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _geoUserSessionLock;
}

@property unsigned long long currentQueryID;
@property (readonly, nonatomic) BOOL skipAutoFillDataUpdates;
@property (retain, nonatomic) PARSession *parsecdSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WBSParsecSearchSessionDelegate> delegate;
@property (retain, nonatomic) WBSCompletionQuery *currentQuery;
@property (nonatomic, setter=setUIScale:) double uiScale;
@property (readonly, nonatomic) id<WBSParsecFeedbackDispatcher> feedbackDispatcher;
@property (readonly, nonatomic) WBSParsecABGroupManager *abGroupManager;
@property (readonly, nonatomic, getter=isABTestingEnabled) BOOL abTestingEnabled;

+ (void)_updateAutoFillTLDsIfNeededForSession:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_updateAutoFillCorrectionSetsIfNeededForSession:(id)a0 completionHandler:(id /* block */)a1;
+ (id)sharedDomainPolicyProvider;
+ (id)sharedCorrectionsProcessor;
+ (id)sharedPARSession;

- (void)_didReceiveResponse:(id)a0 error:(id)a1 forTask:(id)a2 query:(id)a3;
- (void).cxx_destruct;
- (id)initWithParsecdSession:(id)a0 skipAutoFillDataUpdates:(BOOL)a1;
- (void)_setCurrentQuery:(id)a0 withKeyboardInputType:(id)a1;
- (void)_startUpdatingAutoFillDataInBackgroundIfPossibleForSession:(id)a0;
- (void)session:(id)a0 bag:(id)a1 didLoadWithError:(id)a2;
- (BOOL)_isABTestingEnabledOnProcessingQueue;

@end
