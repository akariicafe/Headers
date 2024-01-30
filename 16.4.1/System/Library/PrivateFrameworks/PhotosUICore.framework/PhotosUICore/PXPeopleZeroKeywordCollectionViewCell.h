@class UIView;

@interface PXPeopleZeroKeywordCollectionViewCell : PXSearchZeroKeywordCollectionViewCell

@property (retain, nonatomic) UIView *peopleContentView;

+ (id)reuseIdentifier;

- (void)setThumbnailSize:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setPeople:(id)a0 withThumbnailSize:(struct CGSize { double x0; double x1; })a1;

@end
