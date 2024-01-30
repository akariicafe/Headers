@protocol CRKClassKitRosterRequirements;

@interface CRKClassKitClassPropertyApplicator : NSObject

@property (readonly, nonatomic) id<CRKClassKitRosterRequirements> requirements;

- (void).cxx_destruct;
- (id)initWithRequirements:(id)a0;
- (BOOL)additionsAndRemovalsIntersect:(id)a0;
- (void)addUser:(id)a0 toClass:(id)a1;
- (void)removeUser:(id)a0 fromClass:(id)a1;
- (void)addTrustedUser:(id)a0 toClass:(id)a1;
- (void)removeTrustedUser:(id)a0 fromClass:(id)a1;
- (id)identifiersOfUsers:(id)a0;
- (id)applyProperties:(id)a0 toClass:(id)a1 error:(id *)a2;

@end
