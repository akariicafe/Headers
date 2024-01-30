@class NSLayoutConstraint, NSArray, UIStackView;
@protocol CPSButtonDelegate;

@interface CPSInformationTemplateButtonsViewController : UIViewController

@property (retain, nonatomic) UIStackView *buttonStackView;
@property (weak, nonatomic) id<CPSButtonDelegate> buttonDelegate;
@property (nonatomic) unsigned long long preferredButtonIndex;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (copy, nonatomic) NSArray *buttons;

- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (void)_updateButtons;
- (void)_updateHeight;
- (void)viewDidLoad;
- (id)initWithButtons:(id)a0 buttonDelegate:(id)a1;
- (void)setButtonIdentifier:(id)a0 enabled:(BOOL)a1;

@end
