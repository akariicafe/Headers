@class UIFont, _MKRightImageButton, NSArray, MKVibrantLabel, NSString, UIImage, NSLayoutConstraint;

@interface MKPlaceSectionHeaderView : MKPlaceSectionItemView {
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    BOOL _contentChanged;
    double _width;
}

@property (retain, nonatomic) MKVibrantLabel *sectionHeaderLabel;
@property (retain, nonatomic) _MKRightImageButton *seeMoreButton;
@property (retain, nonatomic) NSArray *seeMoreButtonConstraints;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *seeMoreButtonText;
@property (retain, nonatomic) UIFont *seeMoreButtonFont;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } iconDisplaySize;
@property (nonatomic) BOOL showSeeMoreButton;
@property (nonatomic) BOOL seeMoreButtonAlwaysOnNewLine;

- (void)contentSizeDidChange;
- (void)updateContent;
- (void)createConstraints;
- (void).cxx_destruct;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (void)updateConstraints;
- (BOOL)shouldStack;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateConstraints;

@end
