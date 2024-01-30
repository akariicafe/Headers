@class NSArray;

@interface _UIStatusBarDisplayItemGroupRelation : _UIStatusBarDisplayItemRelation

@property (retain, nonatomic) NSArray *relations;
@property (nonatomic) BOOL requiresAll;

- (id)_ui_descriptionBuilder;
- (id)itemStates;
- (void).cxx_destruct;
- (id)type;
- (BOOL)isFulfilled;

@end
