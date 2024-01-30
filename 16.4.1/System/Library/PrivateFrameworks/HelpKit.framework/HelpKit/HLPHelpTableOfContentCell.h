@class UIImageView, HLPURLSessionItem, UILabel, HLPHelpItem, NSLayoutConstraint;

@interface HLPHelpTableOfContentCell : UITableViewCell {
    NSLayoutConstraint *_arrowImageViewLeadingConstraint;
    NSLayoutConstraint *_sectionImageWidthConstraint;
    NSLayoutConstraint *_sectionImageLeadingConstraint;
    NSLayoutConstraint *_labelToArrowViewLeadingConstraint;
}

@property (nonatomic) BOOL RTL;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *sectionImageView;
@property (retain, nonatomic) HLPURLSessionItem *sectionImageURLSessionItem;
@property (nonatomic) BOOL showFirstLevelIcon;
@property (nonatomic) BOOL ignoreLevels;
@property (nonatomic) BOOL closed;
@property (nonatomic) BOOL updateSeparatorInsetAutomatically;
@property (retain, nonatomic) HLPHelpItem *helpItem;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (id)accessibilityLabel;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)prepareForReuse;
- (void)dealloc;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)toggle;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arrowTransform;
- (void)cancelIconRequest;
- (long long)itemLevel;
- (void)updateToggleImageAnimated:(BOOL)a0;

@end
