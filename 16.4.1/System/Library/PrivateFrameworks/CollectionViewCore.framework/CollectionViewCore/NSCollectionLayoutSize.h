@class NSCollectionLayoutDimension;

@interface NSCollectionLayoutSize : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) long long widthSemantic;
@property (nonatomic) long long heightSemantic;
@property (retain, nonatomic) NSCollectionLayoutDimension *widthDimension;
@property (retain, nonatomic) NSCollectionLayoutDimension *heightDimension;

+ (id)sizeWithContainerSize;
+ (id)sizeWithSize:(struct CGSize { double x0; double x1; })a0 widthSemantic:(long long)a1 heightSemantic:(long long)a2;
+ (id)sizeWithWidthDimension:(id)a0 heightDimension:(id)a1;
+ (id)sizeWithAbsoluteSize:(struct CGSize { double x0; double x1; })a0;
+ (id)sizeWithContainerWidthFactor:(double)a0 containerHeightFactor:(double)a1;
+ (id)sizeWithWidth:(double)a0 widthSemantic:(long long)a1 height:(double)a2 heightSemantic:(long long)a3;

- (BOOL)isEstimated;
- (BOOL)isContainerSize;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 widthSemantic:(long long)a1 heightSemantic:(long long)a2 width:(id)a3 height:(id)a4;
- (struct CGSize { double x0; double x1; })_effectiveSizeForContainer:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_containerSizeDependentAxes;
- (struct CGSize { double x0; double x1; })_effectiveSizeForContainer:(id)a0 ignoringInsets:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEstimatedForAxis:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })_effectiveSizeForContainer:(id)a0 displayScale:(double)a1 ignoringInsets:(BOOL)a2;
- (id)description;
- (void).cxx_destruct;

@end
