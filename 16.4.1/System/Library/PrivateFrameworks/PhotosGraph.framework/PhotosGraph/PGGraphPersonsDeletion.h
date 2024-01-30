@class NSSet;

@interface PGGraphPersonsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *personLocalIdentifiers;

- (unsigned long long)changeCount;
- (unsigned long long)type;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPersonLocalIdentifiers:(id)a0;

@end
