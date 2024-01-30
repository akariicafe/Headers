@class NSSet;

@interface PGGraphMomentsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *momentUUIDs;

- (unsigned long long)changeCount;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithMomentUUIDs:(id)a0;

@end
