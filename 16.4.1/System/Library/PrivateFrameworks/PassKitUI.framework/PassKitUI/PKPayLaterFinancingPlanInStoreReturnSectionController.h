@class NSDictionary, PKPayLaterFinancingPlan;

@interface PKPayLaterFinancingPlanInStoreReturnSectionController : PKPayLaterSectionController {
    double _maxIconWidth;
    NSDictionary *_sectionIcons;
}

@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan;

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureLearnMoreSection:(id)a0;
- (void)_configurePANSection:(id)a0;
- (void)_configureStoreCreditSection:(id)a0;
- (void)_configureTappingPaymentMethodSection:(id)a0;
- (id)_iconTitleDetailRowForSectionIdentifier:(id)a0 title:(id)a1 detail:(id)a2;
- (id)initWithFinancingPlan:(id)a0 payLaterAccount:(id)a1 delegate:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
