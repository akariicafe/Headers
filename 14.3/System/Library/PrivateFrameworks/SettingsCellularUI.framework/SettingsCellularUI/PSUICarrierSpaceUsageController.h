@interface PSUICarrierSpaceUsageController : PSListController

- (id)specifiers;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)simStatusChanged;
- (void)carrierSpaceChanged;
- (id)usageSections;
- (id)usageCategories;
- (BOOL)hasMultipleDevicesOfTheSameType;
- (BOOL)hasMultiplePlansOfTheSameTypeInTheSameSectionCategory;
- (BOOL)shouldShowPlanSection:(id)a0;
- (BOOL)hasMultiplePlansOfSameTypeForNetworkUsageLabel:(id)a0;
- (id)deviceTypeSectionLabelForAccountMetrics:(id)a0;
- (id)planCategorySectionLabelForPlanMetrics:(id)a0;
- (BOOL)shouldShowData:(id)a0;
- (id)usageGraphSpecifierForSection:(id)a0;
- (BOOL)shouldShowOnlyRemainingData:(id)a0;
- (id)dataUsageDescription:(id)a0;
- (BOOL)shouldShowCalls:(id)a0;
- (BOOL)shouldShowOnlyRemainingCalls:(id)a0;
- (id)callsDescription:(id)a0;
- (BOOL)shouldShowMessages:(id)a0;
- (BOOL)shouldShowOnlyRemainingMessages:(id)a0;
- (id)messagesDescription:(id)a0;
- (BOOL)shouldShowRemainingCredit:(id)a0;
- (id)remainingCreditDescription:(id)a0;
- (id)barGraphColors;

@end
