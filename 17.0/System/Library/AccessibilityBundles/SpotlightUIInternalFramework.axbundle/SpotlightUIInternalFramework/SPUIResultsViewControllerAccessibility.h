@interface SPUIResultsViewControllerAccessibility : __SPUIResultsViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)searchAgentUpdatedResults:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)_axFirstResultInModel:(id)a0;
- (long long)_axNumberOfResultsInModel:(id)a0;
- (id)_axPreviousAnnouncement;
- (id)_axPreviousGoResult;
- (BOOL)_axResultsFirstAppeared;
- (id)_axResultsInSection:(id)a0;
- (id)_axSectionsInModel:(id)a0;
- (void)_axSetPreviousAnnouncement:(id)a0;
- (void)_axSetPreviousGoResult:(id)a0;
- (void)_axSetResultsFirstAppeared:(BOOL)a0;
- (id)_axStringForType:(int)a0;

@end
