@class UIAlertController, NSArray, NSString;
@protocol CACContactDisambiguationPresentationViewControllerDelegate;

@interface CACDisambiguationPresentationViewController : UIViewController <CACViewController>

@property (retain, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) id<CACContactDisambiguationPresentationViewControllerDelegate> contactDisambiguationDelegate;
@property (retain, nonatomic) NSArray *disambiguationItems;
@property (readonly, nonatomic) NSString *alertTitle;
@property (readonly, nonatomic) long long zOrder;
@property (readonly, nonatomic) BOOL isOverlay;

- (BOOL)_canShowWhileLocked;
- (id)initWithTitle:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)actionForItem:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1;
- (id)newActionCustomContentView:(id)a0;
- (id)newAlertControllerWithTitle:(id)a0 message:(id)a1;
- (void)performHideWithCompletion:(id /* block */)a0;

@end
