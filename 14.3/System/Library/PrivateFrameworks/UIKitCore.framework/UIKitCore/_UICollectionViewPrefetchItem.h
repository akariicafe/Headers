@class UICollectionReusableView, UICollectionViewLayoutAttributes;

@interface _UICollectionViewPrefetchItem : NSObject

@property (retain, nonatomic) UICollectionViewLayoutAttributes *attributes;
@property (nonatomic) BOOL hasPrefetchedData;
@property (retain, nonatomic) UICollectionReusableView *view;

- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
