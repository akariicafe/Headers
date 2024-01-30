@class PXExtendedTraitCollection;

@interface PXBarSpec : NSObject <NSCopying>

@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)a0;
- (void).cxx_destruct;
- (id)sortedBarItemsByPlacement:(id)a0;

@end
