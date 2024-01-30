@class PXGLayout, PXScrollViewController, UIView;
@protocol PXGHitTestEnvironment;

@interface PXGInteraction : NSObject

@property (weak, nonatomic) PXGLayout *layout;
@property (weak, nonatomic) UIView<PXGHitTestEnvironment> *view;
@property (weak, nonatomic) PXScrollViewController *scrollViewController;

- (void)scrollViewControllerDidChange;
- (void)viewDidChange;
- (void).cxx_destruct;
- (void)layoutDidChange;
- (void)viewWillChange;

@end
