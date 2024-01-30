@class ICNote, UIViewController, UIButton;
@protocol ICAudioBarViewControllerDelegate;

@interface ICAudioBarViewController : UIViewController

@property (weak, nonatomic) UIViewController *addedToViewController;
@property (nonatomic) double height;
@property (weak, nonatomic) id<ICAudioBarViewControllerDelegate> delegate;
@property (weak, nonatomic) ICNote *note;
@property (readonly, nonatomic) UIButton *doneButton;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setHeight:(double)a0;
- (BOOL)_canShowWhileLocked;
- (double)height;
- (void)done:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addConstraintsInSuperview:(id)a0;
- (void)addToViewController:(id)a0;
- (void)adjustTextViewContentInsetWhenAddingView:(BOOL)a0;
- (BOOL)hasTranslucentNavigationBar;
- (void)noteWillBeDeletedNotification:(id)a0;

@end
