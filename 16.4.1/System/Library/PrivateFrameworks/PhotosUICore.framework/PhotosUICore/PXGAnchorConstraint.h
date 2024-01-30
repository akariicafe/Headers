@class PXGSpriteReference;

@interface PXGAnchorConstraint : NSObject <NSCopying>

@property (retain, nonatomic) PXGSpriteReference *spriteReference;
@property (nonatomic) unsigned long long referencingOptions;
@property (nonatomic) long long spriteAttribute;
@property (nonatomic) BOOL visiblePortionOnly;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) long long inequality;
@property (nonatomic) unsigned int spriteEdge;
@property (nonatomic) unsigned int visibleRectEdge;
@property (nonatomic) double offset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
