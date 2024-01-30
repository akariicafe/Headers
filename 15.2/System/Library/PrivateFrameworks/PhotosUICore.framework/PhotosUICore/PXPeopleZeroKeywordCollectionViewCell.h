@class UIView;

@interface PXPeopleZeroKeywordCollectionViewCell : PXSearchZeroKeywordCollectionViewCell

@property (retain, nonatomic) UIView *peopleContentView;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (void)setThumbnailSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setPeople:(id)a0 withThumbnailSize:(struct CGSize { double x0; double x1; })a1;

@end
