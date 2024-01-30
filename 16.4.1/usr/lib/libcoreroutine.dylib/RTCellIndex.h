@interface RTCellIndex : NSObject <NSCopying>

@property (nonatomic) short x;
@property (nonatomic) short y;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithX:(short)a0 Y:(short)a1;

@end
