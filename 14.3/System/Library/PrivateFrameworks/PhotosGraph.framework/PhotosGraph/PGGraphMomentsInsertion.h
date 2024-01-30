@class NSSet;

@interface PGGraphMomentsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *momentLocalIdentifiers;
@property (readonly, nonatomic) NSSet *moments;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)description;
- (unsigned long long)type;
- (id)initWithMomentLocalIdentifiers:(id)a0;
- (id)initWithMoments:(id)a0;

@end
