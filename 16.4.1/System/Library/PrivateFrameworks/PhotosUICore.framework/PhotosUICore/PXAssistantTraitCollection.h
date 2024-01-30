@interface PXAssistantTraitCollection : NSObject <NSCopying>

@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) BOOL isRTL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDisplayScale:(double)a0 isRTL:(BOOL)a1;

@end
