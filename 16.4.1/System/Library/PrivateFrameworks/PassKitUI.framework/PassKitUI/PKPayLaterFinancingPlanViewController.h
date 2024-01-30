@class PKBusinessChatController, PKPaymentTransactionIconGenerator, UIImageView, NSDate, PKPayLaterContentActionFooterView, PKPayLaterPaymentIntentController, PKPayLaterFinancingPlanSectionController, UIBarButtonItem, NSDateFormatter, PKPayLaterBusinessChatTopicComposer, NSString, PKPaymentPass, PKPayLaterFinancingPlan, PKPayLaterDashboardMessageComposer, UIImage;

@interface PKPayLaterFinancingPlanViewController : PKPayLaterViewController <PKPayLaterContentActionFooterViewDelegate, PKPayLaterDashboardMessageComposerDelegate, PKViewControllerPreflightable> {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPaymentPass *_payLaterPass;
    PKPayLaterFinancingPlanSectionController *_sectionController;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKPayLaterContentActionFooterView *_footerView;
    UIImage *_merchantIcon;
    NSDateFormatter *_dateFormatter;
    PKPayLaterDashboardMessageComposer *_dashboardMessagesComposer;
    PKPaymentTransactionIconGenerator *_iconGenerator;
    UIImageView *_navigationBarImageView;
    PKBusinessChatController *_businessChatController;
    BOOL _preflightedData;
    NSDate *_lastUpdateOfFinancingPlan;
    PKPayLaterFinancingPlan *_pendingFinancingPlanUpdate;
    UIBarButtonItem *_moreMenuButton;
    PKPayLaterBusinessChatTopicComposer *_topicsComposer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)headerHeight;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_closeButtonTapped;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)pageTag;
- (void)_configureFooter;
- (id)_financingPlanMoreMenu;
- (void)_presentBusinessChat;
- (void)_presentInStoreReturnsViewController;
- (void)_presentLoanAgreement;
- (void)_sharePlan;
- (void)_updateMerchantIcon;
- (id)additionalAnalyticsDictionary;
- (void)dashboardMessageComposer:(id)a0 requestPresentFinancingPlanDetails:(id)a1;
- (void)dashboardMessageComposer:(id)a0 requestPresentPassDetailsForPass:(id)a1;
- (void)dashboardMessageComposer:(id)a0 requestPresentViewController:(id)a1;
- (void)dashboardMessageComposer:(id)a0 requestPushViewController:(id)a1;
- (void)didUpdateFinancingPlan:(id)a0;
- (void)didUpdatePayLaterAccount:(id)a0;
- (id)initWithFinancingPlan:(id)a0 payLaterAccount:(id)a1 paymentIntentController:(id)a2 merchantIcon:(id)a3 iconGenerator:(id)a4;
- (id)navigationBarAnimationView;
- (void)payLaterContentActionFooterViewDidTapButton;
- (void)reloadMessages;

@end
