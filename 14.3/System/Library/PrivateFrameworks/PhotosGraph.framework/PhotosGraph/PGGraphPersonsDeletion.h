@class NSSet;

@interface PGGraphPersonsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *personLocalIdentifiers;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)description;
- (unsigned long long)type;
- (id)initWithPersonLocalIdentifiers:(id)a0;

@end
