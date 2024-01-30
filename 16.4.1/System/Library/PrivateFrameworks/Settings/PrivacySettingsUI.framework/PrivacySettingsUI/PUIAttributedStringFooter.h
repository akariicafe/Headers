@class UITextView, PSSpecifier, NSString, NSLayoutConstraint;

@interface PUIAttributedStringFooter : UITableViewHeaderFooterView <UITextViewDelegate, PSHeaderFooterView>

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (retain, nonatomic) NSLayoutConstraint *textViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)string:(id)a0 replacingSubstring:(id)a1 withImage:(id)a2;

- (void)setTableView:(id)a0;
- (id)initWithSpecifier:(id)a0;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)refreshContentsWithSpecifier:(id)a0;
- (void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)a0;
- (void)updateConstraints;
- (void)setupSubviewsAndContstraints;
- (void).cxx_destruct;

@end
