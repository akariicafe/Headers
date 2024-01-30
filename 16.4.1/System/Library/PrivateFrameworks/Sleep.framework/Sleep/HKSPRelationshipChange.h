@protocol HKSPMutableObject, HKSPObject;

@interface HKSPRelationshipChange : HKSPChange

@property (readonly, nonatomic) id<HKSPMutableObject> changedValue;
@property (readonly, nonatomic) id<HKSPObject> originalValue;
@property (readonly, nonatomic) BOOL isAdd;
@property (readonly, nonatomic) BOOL isUpdate;
@property (readonly, nonatomic) BOOL isRemove;

- (id)initWithProperty:(id)a0 changedObject:(id)a1 originalObject:(id)a2;

@end
