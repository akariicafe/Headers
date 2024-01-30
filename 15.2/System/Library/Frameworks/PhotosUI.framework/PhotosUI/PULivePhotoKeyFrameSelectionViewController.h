@class UIButton, NSString;
@protocol PULivePhotoKeyFrameSelectionViewControllerDelegate;

@interface PULivePhotoKeyFrameSelectionViewController : UIViewController

@property (retain, nonatomic) UIButton *makeKeyPhotoBtn;
@property (weak, nonatomic) id<PULivePhotoKeyFrameSelectionViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *selectionTitle;

- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tapMakeKeyPhoto:(id)a0;
- (void)_updateButtonTitle;

@end
