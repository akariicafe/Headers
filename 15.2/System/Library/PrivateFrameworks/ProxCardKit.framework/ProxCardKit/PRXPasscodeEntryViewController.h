@class PRXPasscodeEntryView, PRXImageView, UIImage;

@interface PRXPasscodeEntryViewController : PRXCardContentViewController <PRXPasscodeEntryViewDelegate>

@property (readonly, nonatomic) PRXPasscodeEntryView *passcodeEntryView;
@property (nonatomic) long long numberOfDigits;
@property (nonatomic) BOOL useMonospacedFont;
@property (readonly, nonatomic) PRXImageView *imageView;
@property (copy, nonatomic) id /* block */ textChangeHandler;
@property (copy, nonatomic) id /* block */ textEntryCompletionHandler;
@property (retain, nonatomic) UIImage *image;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_textDidChange:(id)a0;
- (void)passcodeEntryViewDidBecomeFirstResponder:(id)a0;
- (void)_updatePasscodeEntryView;
- (void)didCompleteTextEntry:(id)a0;
- (void)_scrollToWells;

@end
