@class UIButton, UIImage;
@protocol PXDisplayCollection;

@interface PUImportAddToAlbumsPickerCell : UITableViewCell {
    BOOL _isPerformingUpdate;
    BOOL _showingSelectionMark;
}

@property (weak, nonatomic) UIButton *checkMarkButton;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) id<PXDisplayCollection> collection;
@property (readonly, nonatomic) UIImage *thumbail;

- (void)setCollection:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setType:(unsigned long long)a0;
- (void)didAddSubview:(id)a0;
- (void)setThumbnail:(id)a0;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (void)layoutSubviews;
- (BOOL)isSelectable;
- (void)_configureCell;

@end
