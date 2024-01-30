@class UIImageView, UIImage, NSString;
@protocol PUOutlineCellDelegate, PXNavigationListItem;

@interface PUOutlineCell : _UICollectionViewOutlineCell

@property (retain, nonatomic) UIImageView *accessoryImageView;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) id<PXNavigationListItem> item;
@property (weak, nonatomic) id<PUOutlineCellDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) long long mediaRequestID;

- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)_updateViewConfigurationsWithState:(unsigned long long)a0;
- (id)_editingConfigurationForState:(unsigned long long)a0;
- (BOOL)_hasEditSpecificAccessories;
- (void)_renameItem:(id)a0 toTitle:(id)a1;

@end
