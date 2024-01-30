@class PKPayLaterFinancingOption, PKPayLaterSetupFlowController;
@protocol PKPayLaterReviewPlanSectionControllerDelegate;

@interface PKPayLaterReviewPlanSectionController : PKPayLaterSectionController {
    PKPayLaterFinancingOption *_financingOption;
    id<PKPayLaterReviewPlanSectionControllerDelegate> _delegate;
    PKPayLaterSetupFlowController *_setupController;
    BOOL _useDynamicContent;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureDynamicSection:(id)a0 snapshot:(id)a1;
- (void)configureCellForRegistration:(id)a0 item:(id)a1;
- (void)didTapHyperLink:(id)a0;
- (id)initWithSetupFlowController:(id)a0 dynamicContentPage:(id)a1 financingOption:(id)a2 delegate:(id)a3;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
