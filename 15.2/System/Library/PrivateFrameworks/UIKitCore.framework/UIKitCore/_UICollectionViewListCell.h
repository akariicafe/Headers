@class NSArray, UILayoutGuide;

@interface _UICollectionViewListCell : UICollectionViewListCell

@property (copy, nonatomic) NSArray *leadingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *trailingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *leadingEditingAccessoryConfigurations;
@property (copy, nonatomic) NSArray *trailingEditingAccessoryConfigurations;
@property (nonatomic) BOOL indentsLeadingAccessories;
@property (readonly, nonatomic) UILayoutGuide *_separatorLayoutGuide;
@property (nonatomic) long long selectionStyle;
@property (nonatomic, setter=_setBackgroundViewConfigurationGrouping:) long long _backgroundViewConfigurationGrouping;
@property (nonatomic) BOOL expanded;

- (BOOL)expanded;
- (void)setExpanded:(BOOL)a0;
- (void)_setAccessoryConfigurations:(id)a0 forAxis:(long long)a1;
- (unsigned long long)_maskedCornersForSystemBackgroundView;
- (id)_customViewForAccessoryConfiguration:(id)a0;
- (id)_configurationForListAccessoryType:(long long)a0;
- (long long)accessoryTypeForAxis:(long long)a0;
- (id)accessoryViewForAxis:(long long)a0;
- (void)setAccessoryType:(long long)a0 forAxis:(long long)a1;
- (void)setAccessoryView:(id)a0 forAxis:(long long)a1;
- (void)_setShowingCompactContextMenu:(BOOL)a0;

@end
