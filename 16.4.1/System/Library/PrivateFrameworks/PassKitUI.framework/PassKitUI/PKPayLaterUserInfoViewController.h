@class NSString, PKPayLaterUserInfoSectionController, PKApplyController;

@interface PKPayLaterUserInfoViewController : PKPayLaterViewController <PKPayLaterUserInfoSectionControllerDelegate, PKSetupFlowControllerProtocol> {
    PKPayLaterUserInfoSectionController *_sectionController;
    PKApplyController *_applyController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithPayLaterAccount:(id)a0;
- (id)pageTag;
- (void)didUpdatePayLaterAccount:(id)a0;
- (void)nextViewControllerWithCompletion:(id /* block */)a0;
- (void)updateUserInfoForType:(long long)a0 completion:(id /* block */)a1;

@end
