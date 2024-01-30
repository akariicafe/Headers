@class NSString, NSMutableDictionary;
@protocol SearchUIFeedbackDelegate;

@interface SUICKPFeedbackDelegateDemultiplexer : NSObject <SearchUIFeedbackDelegate>

@property (readonly, nonatomic) NSMutableDictionary *feedbackDelegatesByCardSectionIdentifiers;
@property (readonly, nonatomic) NSMutableDictionary *feedbackDelegatesByCardSectionViewIds;
@property (retain, nonatomic) id<SearchUIFeedbackDelegate> defaultDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendCustomFeedback:(id)a0;
- (void)cardViewDidAppear:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)cardViewDidDisappear:(id)a0;
- (void)didErrorOccur:(id)a0;
- (void)didReportUserResponseFeedback:(id)a0;
- (void)reportFeedback:(id)a0 queryId:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0;
- (void)willDismissViewController:(id)a0;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)a0;
- (BOOL)shouldHandleCardSectionEngagement:(id)a0;
- (void)cardSectionViewDidInvalidateSize:(id)a0 animate:(BOOL)a1;
- (void)presentViewControllerForCard:(id)a0 animate:(BOOL)a1;
- (void)cardSectionViewDidInvalidateSize:(id)a0;
- (id)_delegateForFeedback:(id)a0;
- (id)_delegateForView:(id)a0;

@end
