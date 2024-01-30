@interface _UISegmentedControlSegmentHoverIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) BOOL isSelected;

- (BOOL)isEqualToIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIndex:(long long)a0 selected:(BOOL)a1;

@end
