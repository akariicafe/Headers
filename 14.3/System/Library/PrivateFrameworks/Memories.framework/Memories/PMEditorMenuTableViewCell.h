@class NSString, UIActivityIndicatorView, UILabel, NSLayoutConstraint;

@interface PMEditorMenuTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *upperDetailsLabel;
@property (retain, nonatomic) UILabel *centerDetailsLabel;
@property (retain, nonatomic) UILabel *lowerDetailsLabel;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSString *secondaryDetailText;
@property (nonatomic, getter=isShowingActivityIndicator) BOOL showingActivityIndicator;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraint;

+ (double)dynamicTypeHeight;

- (void)_updateFonts;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)_disclosureChevronImage:(BOOL)a0;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)setUserInteractionEnabled:(BOOL)a0;

@end
