@protocol PKPaletteTextOptionsViewControllerDelegate;

@interface PKPaletteTextOptionsViewController : UIViewController

@property (weak, nonatomic) id<PKPaletteTextOptionsViewControllerDelegate> delegate;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)loadView;
- (void).cxx_destruct;
- (void)_textButtonTouchUpInsideHandler:(id)a0;
- (void)_signatureButtonTouchUpInsideHandler:(id)a0;

@end
