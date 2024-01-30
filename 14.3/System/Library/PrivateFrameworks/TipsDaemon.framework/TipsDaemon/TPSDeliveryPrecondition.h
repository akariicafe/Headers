@class NSArray;

@interface TPSDeliveryPrecondition : TPSSerializableObject

@property (nonatomic) unsigned long long joinType;
@property (copy, nonatomic) NSArray *conditions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;

@end
