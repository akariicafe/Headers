@class NSArray, NSString, NSObject;
@protocol _MKPlaceItem, MUPlaceCardAnalyticsProvider, OS_dispatch_queue, GEOLogContextDelegate;

@interface MUPlaceCardAnalyticsController : NSObject <MUInfoCardAnalyticsDelegate, MUPlaceModuleAnalyticsLogging> {
    NSObject<OS_dispatch_queue> *_analyticsQueue;
}

@property (readonly, nonatomic) id<_MKPlaceItem> placeItem;
@property (readonly, nonatomic) NSArray *analyticModules;
@property (readonly, nonatomic) id<GEOLogContextDelegate> logContextDelegate;
@property (readonly, weak, nonatomic) id<MUPlaceCardAnalyticsProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 eventValue:(id)a1 feedbackDelegateSelector:(int)a2;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 eventValue:(id)a1 feedbackDelegateSelector:(int)a2 actionRichProviderId:(id)a3;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 actionURL:(id)a3 photoID:(id)a4 moduleMetadata:(id)a5 feedbackDelegateSelector:(int)a6 actionRichProviderId:(id)a7;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 feedbackDelegateSelector:(int)a3 actionRichProviderId:(id)a4;
- (void)infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 moduleMetadata:(id)a3 feedbackDelegateSelector:(int)a4 actionRichProviderId:(id)a5;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)a0 resultIndex:(long long)a1 targetID:(unsigned long long)a2 transitSystem:(id)a3 transitDepartureSequence:(id)a4 transitCardCategory:(int)a5 transitIncident:(id)a6 feedbackDelegateSelector:(int)a7;
- (void)instrumentCloseUsingClientType:(unsigned long long)a0;
- (void)_infoCardAnalyticsDidSelectAction:(int)a0 target:(int)a1 eventValue:(id)a2 actionURL:(id)a3 photoID:(id)a4 feedbackDelegateSelector:(int)a5 modules:(id)a6 actionRichProviderId:(id)a7 completion:(id /* block */)a8;
- (void)_requestHostToLogFeedbackTypeIfNeeded:(int)a0;
- (void)infoCardAnalyticsPopulateSharedStateWithButtonList:(id)a0;
- (id)initWithAnalyticsProvider:(id)a0;
- (void)instrumentAction:(int)a0 forModuleType:(long long)a1 usingFeedbackType:(int)a2;
- (void)instrumentAction:(int)a0 target:(int)a1 eventValue:(id)a2 moduleType:(long long)a3 feedbackType:(int)a4;
- (void)instrumentConceal;
- (void)instrumentDailyUsageCount;
- (void)instrumentPunchoutActionWithURL:(id)a0 providerId:(id)a1;
- (BOOL)instrumentRevealIfNeededWithImpressionsSessionId:(id)a0;
- (void)instrumentVerticalScrollWithBeginningPoint:(struct CGPoint { double x0; double x1; })a0 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a1 velocity:(struct CGPoint { double x0; double x1; })a2;

@end
