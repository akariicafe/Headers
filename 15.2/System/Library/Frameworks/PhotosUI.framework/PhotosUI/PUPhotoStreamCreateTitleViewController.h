@class UITextView, NSString, UITextField, NSArray, UILabel, UINavigationItem, NSLayoutConstraint;
@protocol PUPhotoStreamCreateTitleDelegate;

@interface PUPhotoStreamCreateTitleViewController : UIViewController <UITextViewDelegate> {
    UITextField *_titleField;
    UILabel *_descriptionLabel;
    UITextView *_textView;
    UILabel *_textPlaceholderLabel;
    UINavigationItem *_navItem;
    UILabel *_instructionLabel;
    NSArray *_constraints;
    BOOL _hidePlaceholder;
    UILabel *_axPlaceholderLabel;
    NSLayoutConstraint *_standardHeightConstraint;
    NSLayoutConstraint *_axHeightConstraint;
}

@property (nonatomic) id<PUPhotoStreamCreateTitleDelegate> titleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setTitle:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (struct CGSize { double x0; double x1; })contentSizeForViewInPopover;
- (void).cxx_destruct;
- (id)navigationItem;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)textViewDidChange:(id)a0;
- (void)contentSizeChanged;
- (void)_addConstraintsForTraitCollection:(id)a0;
- (void)_cancelPost:(id)a0;

@end
