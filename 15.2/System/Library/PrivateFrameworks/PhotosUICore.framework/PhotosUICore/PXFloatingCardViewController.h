@class UIViewController, NSLayoutConstraint, UILabel, _UIGrabber, UIView;
@protocol PXFloatingCardViewControllerDelegate;

@interface PXFloatingCardViewController : UIViewController

@property (retain, nonatomic) UIView *_headerView;
@property (retain, nonatomic) UILabel *_headerLabel;
@property (retain, nonatomic) _UIGrabber *_grabber;
@property (weak, nonatomic) UIViewController *_contentViewController;
@property (retain, nonatomic) NSLayoutConstraint *_heightConstraint;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *grabberFooterView;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } grabAreaBounds;
@property (weak, nonatomic) id<PXFloatingCardViewControllerDelegate> delegate;

- (BOOL)_canShowWhileLocked;
- (id)initWithContentViewController:(id)a0;
- (void).cxx_destruct;
- (void)removeFromParentViewController;
- (id)initWithCoder:(id)a0;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)_systemFontWithTextStyle:(long long)a0 weight:(double)a1;
- (void)_dismissTapped;

@end
