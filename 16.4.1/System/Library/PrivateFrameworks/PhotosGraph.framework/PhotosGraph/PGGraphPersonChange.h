@class NSString, NSSet;

@interface PGGraphPersonChange : PGGraphChange

@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) NSSet *propertyNames;

- (unsigned long long)type;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPersonLocalIdentifier:(id)a0 propertyNames:(id)a1;
- (void)mergeChange:(id)a0;

@end
