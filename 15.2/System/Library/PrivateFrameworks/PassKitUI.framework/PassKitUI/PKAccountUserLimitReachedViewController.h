@class PKAccount, NSNumberFormatter;

@interface PKAccountUserLimitReachedViewController : PKExplanationViewController {
    PKAccount *_account;
    NSNumberFormatter *_maximumAccountUsersFormatter;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 context:(long long)a1;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectBodyButton:(id)a0;

@end
