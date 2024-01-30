@interface SBSwitcherLiveContentRasterizationAttributes : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) long long rasterizationStyle;
@property (nonatomic) BOOL wantsMinificationFilter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithClass:(Class)a0;
- (id)attributesByModifyingAttributesWithBlock:(id /* block */)a0;

@end
