@class PKBusinessChatController, PKAccountSupportTopicExplanationSectionController, PKAccountSupportTopic, PKAccount;
@protocol PKAccountSupportTopicExplanationViewControllerDelegate;

@interface PKAccountSupportTopicExplanationViewController : PKPaymentSetupOptionsViewController <PKAccountSupportTopicExplanationSectionControllerDelegate> {
    PKAccountSupportTopic *_topic;
    PKAccount *_account;
    id<PKAccountSupportTopicExplanationViewControllerDelegate> _delegate;
    PKAccountSupportTopicExplanationSectionController *_sectionController;
    PKBusinessChatController *_businessChatController;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_performPrimaryAction;
- (id)initWithAccount:(id)a0 topic:(id)a1 delegate:(id)a2;
- (void)_cancelTapped;
- (void)_openSupportLinkURL:(id)a0;
- (void)_showMerchantDetails;
- (void)deselectCells;
- (void)openSupportLink:(id)a0;
- (BOOL)shouldShowSupportLink:(id)a0;

@end
