@class NSSet;

@interface PGGraphMomentsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *momentLocalIdentifiers;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)description;
- (unsigned long long)type;
- (id)initWithMomentLocalIdentifiers:(id)a0;

@end
