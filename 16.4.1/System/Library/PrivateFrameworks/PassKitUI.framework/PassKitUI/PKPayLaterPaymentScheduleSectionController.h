@class PKPayLaterFinancingOption, NSDateFormatter, PKPayLaterSetupFlowController;
@protocol PKPayLaterPaymentScheduleSectionControllerDelegate;

@interface PKPayLaterPaymentScheduleSectionController : PKPayLaterSectionController {
    PKPayLaterSetupFlowController *_setupController;
    PKPayLaterFinancingOption *_selectedFinancingOption;
    NSDateFormatter *_dateFormatter;
    id<PKPayLaterPaymentScheduleSectionControllerDelegate> _delegate;
}

- (id)identifiers;
- (void).cxx_destruct;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)_configurePaymentsSectionSnapshot:(id)a0;
- (void)_configureTotalAmountSection:(id)a0;
- (void)configureCellForRegistration:(id)a0 item:(id)a1;
- (void)didTapHyperLink:(id)a0;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithSetupFlowController:(id)a0 dynamicContentPage:(id)a1 selectedFinancingOption:(id)a2 delegate:(id)a3;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
