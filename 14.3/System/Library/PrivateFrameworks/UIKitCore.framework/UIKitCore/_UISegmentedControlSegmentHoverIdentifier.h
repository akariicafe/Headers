@interface _UISegmentedControlSegmentHoverIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) BOOL isSelected;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToIdentifier:(id)a0;
- (id)initWithIndex:(long long)a0 selected:(BOOL)a1;

@end
