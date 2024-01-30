@interface TSPLazyReferenceFromDataToObject : TSPLazyReference

@property (readonly, nonatomic) long long referenceCount;

- (id)additionalDescription;
- (id)initWithDelegate:(id)a0 identifier:(long long)a1 referenceCount:(long long)a2;

@end
