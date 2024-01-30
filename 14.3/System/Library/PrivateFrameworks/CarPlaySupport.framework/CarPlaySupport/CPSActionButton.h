@class NSDictionary, NSArray, UIImageView, NSMutableDictionary, UILabel, UIImage, NSString;
@protocol CPSActionButtonLayoutDelegate;

@interface CPSActionButton : CPSButton

@property (retain, nonatomic) UILabel *buttonLabel;
@property (retain, nonatomic) UIImageView *buttonImageView;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) NSMutableDictionary *tintColors;
@property (weak, nonatomic) id<CPSActionButtonLayoutDelegate> layoutDelegate;
@property (retain, nonatomic) UIImage *buttonImage;
@property (retain, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL disabledButtonFocused;
@property (retain, nonatomic) NSDictionary *buttonAttributes;

- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_updateLayout;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setSelected:(BOOL)a0;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTintColor:(id)a0 forState:(unsigned long long)a1;
- (void)setupViews;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)stateUpdated;
- (void)updateViews;

@end
