@class FLFollowUpActionHandler;

@interface PSGTransferListController : PSListController

@property (retain, nonatomic) FLFollowUpActionHandler *prebuddyActionHandler;

- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)viewDidLoad;
- (id)specifiers;
- (void).cxx_destruct;
- (void)beginPrebuddy:(id)a0;
- (void)deviceFullErase:(id)a0;
- (void)presentExitBuddyWithUpsellTradeIn:(BOOL)a0 withCompletion:(id /* block */)a1;

@end
