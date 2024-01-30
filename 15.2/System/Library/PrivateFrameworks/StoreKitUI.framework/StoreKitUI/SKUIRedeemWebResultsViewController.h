@class NSString;

@interface SKUIRedeemWebResultsViewController : SKUIRedeemResultsViewController <SUStorePageViewControllerResponder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowResultsForRedeem:(id)a0;

- (void)viewDidLoad;
- (void)dealloc;
- (void)storePage:(id)a0 finishedWithSuccess:(BOOL)a1;

@end
