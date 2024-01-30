@class NSCollectionLayoutSize;

@interface _UICollectionPreferredSize : NSObject {
    struct CGSize { double width; double height; } _originalSize;
    struct CGSize { double width; double height; } _fittingSize;
    struct CGSize { double width; double height; } _preferredSize;
    NSCollectionLayoutSize *_layoutSize;
    id _additionalData;
}

- (id)description;
- (void).cxx_destruct;

@end
