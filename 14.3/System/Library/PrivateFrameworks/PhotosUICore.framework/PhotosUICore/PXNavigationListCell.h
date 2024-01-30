@class UIFont;
@protocol PXNavigationListItem;

@interface PXNavigationListCell : UITableViewCell

@property (class, readonly) UIFont *textLabelFont;

@property (retain, nonatomic) id<PXNavigationListItem> listItem;
@property (nonatomic) BOOL enabled;
@property (nonatomic) long long separatorStyleWorkaround57597636;

+ (id)_symbolConfigurationForFont:(id)a0;
+ (id)detailTextLabelFont;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSeparatorStyle:(long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateCellStyle;
- (id)_currentCellColor;

@end
