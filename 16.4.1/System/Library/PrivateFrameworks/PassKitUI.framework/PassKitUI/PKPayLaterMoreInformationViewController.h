@class NSString, PKPayLaterMoreInformationSectionController;

@interface PKPayLaterMoreInformationViewController : PKPayLaterSetupViewController <PKPayLaterSectionControllerDelegate> {
    PKPayLaterMoreInformationSectionController *_sectionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithSetupFlowController:(id)a0;
- (void)nextButtonTapped;

@end
