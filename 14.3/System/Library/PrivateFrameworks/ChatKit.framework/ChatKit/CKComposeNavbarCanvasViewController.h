@class CKNavigationBarCanvasView, NSString, UILabel, UIButton;
@protocol CKNavbarCanvasViewControllerDelegate;

@interface CKComposeNavbarCanvasViewController : UIViewController <CKNavigationBarCanvasViewDelegate>

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CKNavigationBarCanvasView *canvasView;
@property (weak, nonatomic) id<CKNavbarCanvasViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)updateTitle:(id)a0 animated:(BOOL)a1;
- (id)_windowTraitCollection;
- (double)_preferredHeightForTraitCollection:(id)a0;
- (void)_initializeForTraitCollection:(id)a0;
- (BOOL)shouldShowAvatarView;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })systemMinimumLayoutMarginsForView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)_shouldUseRTL;
- (void)_setupDefaultCanvasView;
- (void)viewDidLoad;

@end
