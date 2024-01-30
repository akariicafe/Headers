@class NSString, PKPayLaterPaymentSource, PKPayLaterFundingSourceSectionController;

@interface PKPayLaterFundingSourceViewController : PKPayLaterSetupViewController <PKPayLaterFundingSourceSectionControllerDelegate, PKPayLaterSectionControllerDelegate> {
    PKPayLaterPaymentSource *_selectedFundingSource;
    PKPayLaterFundingSourceSectionController *_sectionController;
    BOOL _autoPayment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_title;
- (id)_subtitle;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateEnabledButtons;
- (id)additionalAnalyticsDictionary;
- (void)didSelectFundingSource:(id)a0;
- (void)didUpdateAutoPayment:(BOOL)a0;
- (id)initWithSetupFlowController:(id)a0;
- (void)nextButtonTapped;
- (void)reloadFundingSources;
- (void)setShowNavigationBarSpinner:(BOOL)a0;

@end
