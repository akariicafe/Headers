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

- (BOOL)isSelectable;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)a0;
- (void)setThumbnail:(id)a0;
- (void)setCollection:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (void)prepareForReuse;
- (void)setType:(unsigned long long)a0;
- (void)_configureCell;

@end
