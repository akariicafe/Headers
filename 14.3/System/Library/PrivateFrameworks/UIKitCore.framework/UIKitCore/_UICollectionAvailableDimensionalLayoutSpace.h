@interface _UICollectionAvailableDimensionalLayoutSpace : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) unsigned long long axis;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 axis:(unsigned long long)a1;

@end
