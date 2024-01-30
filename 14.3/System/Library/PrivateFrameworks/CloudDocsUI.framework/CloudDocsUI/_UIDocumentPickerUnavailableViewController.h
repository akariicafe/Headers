@class UIImageView, NSURL, UILabel, NSLayoutConstraint, UIButton;

@interface _UIDocumentPickerUnavailableViewController : UIViewController

@property (retain, nonatomic) UIImageView *leadImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *textLabel2;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSURL *buttonURL;
@property (retain, nonatomic) NSLayoutConstraint *topConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageToTitleConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleToTextConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textToTextConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textToButtonConstraint;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_fontSizeDidChange:(id)a0;
- (id)_buttonBackgroundImageForState:(unsigned long long)a0 traits:(id)a1;

@end
