@class NSArray;

@interface TPSDeliveryPrecondition : TPSSerializableObject

@property (nonatomic) long long joinType;
@property (copy, nonatomic) NSArray *conditions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
