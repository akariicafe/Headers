@class NSArray, UIImageView, UIImage, UILabel, NSLayoutConstraint;
@protocol PXDisplayCollection;

@interface PUImportAddToAlbumsPickerCell : UITableViewCell {
    BOOL _isPerformingUpdate;
}

@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraintNoImage;
@property (retain, nonatomic) NSLayoutConstraint *labelLeadingConstraintWithImage;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) id<PXDisplayCollection> collection;
@property (readonly, nonatomic) UIImage *thumbnail;

- (void)setSelected:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setCollection:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)prepareForReuse;
- (BOOL)isSelectable;
- (void)setThumbnail:(id)a0;
- (void)setType:(unsigned long long)a0;
- (void)updateConstraints;
- (id)mutableChangeObject;
- (void).cxx_destruct;
- (void)updateTitle;
- (void)_configureCell;

@end
