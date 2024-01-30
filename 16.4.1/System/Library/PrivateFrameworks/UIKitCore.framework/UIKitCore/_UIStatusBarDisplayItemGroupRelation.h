@class NSArray;

@interface _UIStatusBarDisplayItemGroupRelation : _UIStatusBarDisplayItemRelation

@property (retain, nonatomic) NSArray *relations;
@property (nonatomic) BOOL requiresAll;

- (id)type;
- (id)_ui_descriptionBuilder;
- (BOOL)isFulfilled;
- (id)itemStates;
- (void).cxx_destruct;

@end
