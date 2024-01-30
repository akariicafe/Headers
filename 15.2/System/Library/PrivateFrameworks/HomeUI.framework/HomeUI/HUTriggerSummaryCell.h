@class UIFont, NSString, NSArray, HUIconListView, UIView, UIImageView, UIImage, HFItem, UILabel, UIColor;
@protocol HUResizableCellDelegate;

@interface HUTriggerSummaryCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol, HUSelectableCellProtocol>

@property (retain, nonatomic) NSArray *verticalLabelConstraints;
@property (retain, nonatomic) NSArray *horizontalLabelConstraints;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *descriptionIconView;
@property (retain, nonatomic) HUIconListView *iconContainerView;
@property (retain, nonatomic) UIView *textContainerView;
@property (nonatomic) double textAlpha;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (retain, nonatomic) NSString *titleText;
@property (nonatomic) BOOL hideTitle;
@property (retain, nonatomic) NSString *descriptionText;
@property (nonatomic) BOOL hideDescription;
@property (retain, nonatomic) UIImage *descriptionIcon;
@property (nonatomic) BOOL hideDescriptionIcon;
@property (retain, nonatomic) NSArray *iconDescriptors;
@property (retain, nonatomic) UIColor *cellColor;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (nonatomic) BOOL canBeSelected;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateTitle;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)setUpIconContainerViewConstraints;
- (void)setUpTextContainerViewConstraints;
- (void)_addTitleLabel;
- (void)_addDescriptionLabel;
- (void)_addDescriptionIconView;
- (void)updateSelectionUI;
- (void)updateVerticalLabelConstraints;
- (void)updateHorizontalLabelConstraints;
- (void)updateUITextWithResults:(id)a0;
- (void)updateUIIconsWithResults:(id)a0;

@end
