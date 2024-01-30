@class _UIStatusBarDisplayItemPlacement, _UIStatusBarDisplayItemState;

@interface _UIStatusBarDisplayItemDependencyRelation : _UIStatusBarDisplayItemRelation

@property (weak, nonatomic) _UIStatusBarDisplayItemState *itemState;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement;
@property (nonatomic) BOOL requirement;

- (id)type;
- (id)_ui_descriptionBuilder;
- (BOOL)isFulfilled;
- (id)itemStates;
- (void).cxx_destruct;

@end
