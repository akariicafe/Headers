@class UIButton, NSString;
@protocol PULivePhotoKeyFrameSelectionViewControllerDelegate;

@interface PULivePhotoKeyFrameSelectionViewController : UIViewController

@property (retain, nonatomic) UIButton *makeKeyPhotoBtn;
@property (weak, nonatomic) id<PULivePhotoKeyFrameSelectionViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *selectionTitle;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_updateButtonTitle;
- (void)tapMakeKeyPhoto:(id)a0;

@end
