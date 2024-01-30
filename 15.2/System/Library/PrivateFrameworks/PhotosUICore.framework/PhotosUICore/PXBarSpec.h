@class PXExtendedTraitCollection;

@interface PXBarSpec : NSObject <NSCopying>

@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;

- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sortedBarItemsByPlacement:(id)a0;

@end
