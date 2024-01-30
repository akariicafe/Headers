@interface ADLayoutOptions : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) struct CGSize { double width; double height; } reorientedContainerSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
