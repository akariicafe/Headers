@class PXSurveyQuestionsHorizontalGadgetProviderConfiguration, NSDate;

@interface PXSurveyQuestionsHorizontalGadgetProvider : PXHorizontalCollectionGadgetProvider <PXSurveyQuestionsGadgetProviderDelegate, PXForYouRankable> {
    PXSurveyQuestionsHorizontalGadgetProviderConfiguration *_configuration;
}

@property (copy, nonatomic) NSDate *cachedPriorityDate;
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) long long defaultPriority;
@property (readonly, nonatomic) long long priorityType;
@property (readonly, nonatomic) unsigned long long gadgetType;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsDynamicRanking;
- (void)resetPriorityDate;
- (void)didAnswerQuestionForGadgetProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 contentGadgetProvider:(id)a1 title:(id)a2 horizontalCollectionGadgetClass:(Class)a3;
- (id)infoAlertTitleForHorizontalCollectionGadget:(id)a0;
- (id)infoAlertMessageForHorizontalCollectionGadget:(id)a0;
- (id)hideForeverAlertMessageForHorizontalCollectionGadget:(id)a0;
- (void)horizontalCollectionGadget:(id)a0 hideUntilDate:(id)a1;
- (id)radarConfigurationForHorizontalCollectionGadget:(id)a0;
- (void)horizontalCollectionGadget:(id)a0 configureCustomInfoAlertActionsForAlertController:(id)a1;

@end
