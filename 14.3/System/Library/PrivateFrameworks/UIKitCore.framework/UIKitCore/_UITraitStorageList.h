@class NSArray, NSSet;

@interface _UITraitStorageList : NSObject <NSCoding>

@property (readonly, weak, nonatomic) id topLevelObject;
@property (readonly, nonatomic) NSArray *traitStorages;
@property (readonly, nonatomic) NSSet *descendants;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithTopLevelObject:(id)a0 traitStorages:(id)a1 descendants:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
