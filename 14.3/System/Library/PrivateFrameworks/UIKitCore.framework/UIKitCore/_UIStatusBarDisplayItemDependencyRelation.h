@class _UIStatusBarDisplayItemPlacement, _UIStatusBarDisplayItemState;

@interface _UIStatusBarDisplayItemDependencyRelation : _UIStatusBarDisplayItemRelation

@property (weak, nonatomic) _UIStatusBarDisplayItemState *itemState;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement;
@property (nonatomic) BOOL requirement;

- (id)_ui_descriptionBuilder;
- (void).cxx_destruct;
- (BOOL)isFulfilled;
- (id)type;
- (id)itemStates;

@end
