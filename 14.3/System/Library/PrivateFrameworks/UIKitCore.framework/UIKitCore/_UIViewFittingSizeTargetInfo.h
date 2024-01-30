@interface _UIViewFittingSizeTargetInfo : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) float horizontalPriority;
@property (readonly, nonatomic) float verticalPriority;
@property (nonatomic, getter=isDummy) BOOL dummy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTargetSize:(struct CGSize { double x0; double x1; })a0 horizontalPriority:(float)a1 verticalPriority:(float)a2;
- (BOOL)isEqualToTargetInfo:(id)a0;

@end
