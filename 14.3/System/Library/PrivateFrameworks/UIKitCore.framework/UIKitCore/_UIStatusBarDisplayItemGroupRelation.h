@class NSArray;

@interface _UIStatusBarDisplayItemGroupRelation : _UIStatusBarDisplayItemRelation

@property (retain, nonatomic) NSArray *relations;
@property (nonatomic) BOOL requiresAll;

- (id)_ui_descriptionBuilder;
- (void).cxx_destruct;
- (BOOL)isFulfilled;
- (id)type;
- (id)itemStates;

@end
