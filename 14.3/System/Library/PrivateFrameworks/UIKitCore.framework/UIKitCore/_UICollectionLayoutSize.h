@class _UICollectionLayoutDimension;

@interface _UICollectionLayoutSize : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {
    _UICollectionLayoutDimension *_width;
    _UICollectionLayoutDimension *_height;
}

@property (readonly, nonatomic) _UICollectionLayoutDimension *width;
@property (readonly, nonatomic) _UICollectionLayoutDimension *height;

+ (id)sizeWithWidth:(id)a0 height:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_apiRepresentation;
- (id)initWithWidth:(id)a0 height:(id)a1;

@end
