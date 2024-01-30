@class BCSBusinessItem, UIImageView;
@protocol BCBrandedHeaderViewControllerDelegate;

@interface BCBrandedHeaderViewController : UIViewController

@property (readonly, nonatomic) BCSBusinessItem *businessItem;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (weak, nonatomic) id<BCBrandedHeaderViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithBusinessItem:(id)a0;
- (void)_fetchLogo;

@end
