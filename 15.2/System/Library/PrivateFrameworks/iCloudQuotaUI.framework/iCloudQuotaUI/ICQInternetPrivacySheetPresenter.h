@class UINavigationController, UIViewController, ICQInternetPrivacySheet;

@interface ICQInternetPrivacySheetPresenter : NSObject

@property (retain, nonatomic) ICQInternetPrivacySheet *sheet;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) UIViewController *presentingViewController;

+ (id)presenterWithIdentifier:(id)a0 viewModel:(id)a1;

- (void).cxx_destruct;
- (void)present;

@end
