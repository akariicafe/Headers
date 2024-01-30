@protocol CRKClassKitRosterRequirements;

@interface CRKASMConcreteUserFetcher : NSObject <CRKASMUserFetching>

@property (readonly, nonatomic) id<CRKClassKitRosterRequirements> rosterRequirements;

- (void).cxx_destruct;
- (void)fetchASMUsersWithIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)initWithRosterRequirements:(id)a0;

@end
