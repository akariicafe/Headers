@class NSArray, SFPrivacyReportIconView, UILabel, UIButton;
@protocol SFPrivacyReportExplanationTableViewCellDelegate;

@interface SFPrivacyReportExplanationTableViewCell : UITableViewCell {
    SFPrivacyReportIconView *_iconView;
    UILabel *_textLabel;
    UIButton *_toggleButton;
    UIButton *_sizingToggleButton;
    NSArray *_iconConstraints;
    BOOL _wideLayout;
}

@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (weak, nonatomic) id<SFPrivacyReportExplanationTableViewCellDelegate> delegate;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)_toggleExpanded:(id)a0;
- (void)_updateToggleButtonText;
- (void)_updateUsesWideLayoutForSize:(struct CGSize { double x0; double x1; })a0;

@end
