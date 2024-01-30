@interface UIInterfaceActionGroupViewState : UIInterfaceActionVisualStyleViewState <NSCopying>

@property (readonly, nonatomic) BOOL isVerticalLayoutAxis;
@property (readonly, nonatomic) long long resolvedPresentationStyle;

- (BOOL)_stateEqualToGroupViewState:(id)a0;
- (id)description;
- (void)_collectStateFromGroupViewState:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithResolvedPresentationStyle:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithVerticalLayoutAxis:(BOOL)a0;

@end
