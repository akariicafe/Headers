@class NSArray;

@interface _UIStatusBarDisplayItemRelation : NSObject

@property (readonly, nonatomic, getter=isFulfilled) BOOL fulfilled;
@property (readonly, nonatomic) NSArray *itemStates;

+ (id)exclusionWithDisplayItemState:(id)a0 placement:(id)a1;
+ (id)requirementWithDisplayItemState:(id)a0 placement:(id)a1;
+ (id)anyRelationWithRelations:(id)a0;
+ (id)allRelationWithRelations:(id)a0;

- (id)_ui_descriptionBuilder;
- (id)description;
- (id)type;

@end
