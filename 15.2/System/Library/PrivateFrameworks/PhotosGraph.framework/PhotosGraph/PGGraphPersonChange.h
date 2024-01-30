@class NSString, NSSet;

@interface PGGraphPersonChange : PGGraphChange

@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) NSSet *propertyNames;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)mergeChange:(id)a0;
- (id)initWithPersonLocalIdentifier:(id)a0 propertyNames:(id)a1;

@end
