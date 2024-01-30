@class NSString, PGGraphPersonNode, NSSet;

@interface PGGraphPersonChange : PGGraphChange

@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (retain, nonatomic) PGGraphPersonNode *personNode;
@property (readonly, nonatomic) NSSet *propertyNames;

- (void)mergeChange:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (id)initWithPersonLocalIdentifier:(id)a0 propertyNames:(id)a1;

@end
