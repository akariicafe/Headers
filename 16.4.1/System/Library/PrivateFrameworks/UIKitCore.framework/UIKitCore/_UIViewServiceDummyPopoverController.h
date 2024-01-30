@protocol _UIViewServiceDummyPopoverControllerDelegate;

@interface _UIViewServiceDummyPopoverController : UIPopoverController

@property (weak, nonatomic) id<_UIViewServiceDummyPopoverControllerDelegate> dummyPopoverControllerDelegate;

+ (Class)_popoverViewClass;

- (BOOL)_attemptsToAvoidKeyboard;
- (void)setPopoverContentSize:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)_popoverView:(id)a0 didSetUseToolbarShine:(BOOL)a1;
- (void)_super_setPopoverContentSize:(struct CGSize { double x0; double x1; })a0;

@end
