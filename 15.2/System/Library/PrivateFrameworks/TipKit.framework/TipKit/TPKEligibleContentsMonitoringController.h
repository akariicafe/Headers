@class NSString, NSArray, TPSDuetEventsProvider, TPKContent;
@protocol TPKEligibleContentsMonitoringControllerDelegate;

@interface TPKEligibleContentsMonitoringController : NSObject <TPSEventsProviderDelegate>

@property (copy, nonatomic) NSString *context;
@property (copy, nonatomic) TPKContent *currentContent;
@property (copy, nonatomic) NSArray *eligibleContents;
@property (retain, nonatomic) TPSDuetEventsProvider *duetEventsProvider;
@property (weak, nonatomic) id<TPKEligibleContentsMonitoringControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_legacyIdentifierForContext:(id)a0;
+ (id)_eligibleContentsIdentifierForContext:(id)a0;
+ (id)_currentContentIdentifierForContext:(id)a0;
+ (id)_identifierForContext:(id)a0 withPrefix:(id)a1;

- (id)contents;
- (void)updateRegistrableEventsForCallbackIfNeeded;
- (id)initWithContext:(id)a0;
- (void)updateEligibleContentsCache:(id)a0;
- (void)updateEligibilityWithContents:(id)a0;
- (BOOL)conditionsMatchForClientContextEvents:(id)a0 clientContextMap:(id)a1;
- (id)clientContextKeysForCurrentStateInContents:(id)a0;
- (void)dataProvider:(id)a0 didFinishQueryWithResults:(id)a1;
- (id)clientContextMatchingResultsForContents:(id)a0 clientContextKeys:(id)a1;
- (void).cxx_destruct;
- (void)deregisterAllEventsForCallback;
- (void)updateCurrentContentCache:(id)a0;
- (void)didDisplayContent:(id)a0;
- (void)manualDismissContent:(id)a0;
- (void)dealloc;
- (void)_clearLegacyCachedContent;
- (void)clearContents;
- (void)invalidateClientContextIfNeeded;
- (void)dataProvider:(id)a0 didReceiveCallbackWithResult:(id)a1;

@end
