@interface CCUILayoutOptions : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) double itemEdgeSize;
@property (readonly, nonatomic) double itemSpacing;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithLayoutOptions:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
