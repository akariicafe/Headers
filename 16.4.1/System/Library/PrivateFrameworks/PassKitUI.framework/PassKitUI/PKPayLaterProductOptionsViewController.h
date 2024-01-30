@class NSString, PKPayLaterProductOptionsSectionController;

@interface PKPayLaterProductOptionsViewController : PKPayLaterSetupViewController <PKPayLaterProductOptionsSectionControllerDelegate, PKPayLaterSectionControllerDelegate> {
    PKPayLaterProductOptionsSectionController *_sectionController;
    unsigned long long _pageType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_loadNextViewController;
- (void)productOptionsSectionController:(id)a0 didSelectPreliminaryAssessment:(id)a1;
- (void)_selectedEligibleAssessment;
- (id)initWithSetupFlowController:(id)a0 dynamicContentPageType:(unsigned long long)a1;
- (void)productOptionsSectionController:(id)a0 didSelectFinancingOption:(id)a1;
- (void)reloadAllSectionsAnimated:(BOOL)a0;

@end
