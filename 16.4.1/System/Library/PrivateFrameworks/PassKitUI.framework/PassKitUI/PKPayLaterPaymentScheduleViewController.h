@class NSString, PKPayLaterPaymentScheduleSectionController, PKPayLaterFinancingOption;

@interface PKPayLaterPaymentScheduleViewController : PKPayLaterSetupViewController <PKPayLaterPaymentScheduleSectionControllerDelegate, PKPayLaterSectionControllerDelegate> {
    PKPayLaterPaymentScheduleSectionController *_sectionController;
    PKPayLaterFinancingOption *_selectedFinancingOption;
    long long _setupFlowControllerContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)pageTag;
- (id)initWithSetupFlowController:(id)a0 dynamicContentPageType:(unsigned long long)a1;
- (void)nextButtonTapped;

@end
