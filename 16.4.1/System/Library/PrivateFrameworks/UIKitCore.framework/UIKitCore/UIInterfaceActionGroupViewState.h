@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <NSCopying>

@property (readonly, nonatomic) BOOL isVerticalLayoutAxis;
@property (readonly, nonatomic) long long resolvedPresentationStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void)_collectStateFromGroupViewState:(id)a0;
- (BOOL)_stateEqualToGroupViewState:(id)a0;
- (id)copyWithResolvedPresentationStyle:(long long)a0;
- (id)copyWithVerticalLayoutAxis:(BOOL)a0;

@end
