@class NSDictionary, NSSet, NSArray;

@interface PKSecureElementConsistencyCheckResults : NSObject

@property (readonly, nonatomic) long long cleanupActions;
@property (readonly, nonatomic) NSDictionary *summary;
@property (readonly, nonatomic) NSSet *appletsToDelete;
@property (readonly, nonatomic) NSArray *registerRegions;
@property (readonly, nonatomic) NSSet *credentialsToRegister;
@property (readonly, nonatomic) NSSet *credentialsToDelete;

- (void).cxx_destruct;
- (id)initWithCleanupActions:(long long)a0 resultsSummary:(id)a1 appletsToDelete:(id)a2 credentialsToRegister:(id)a3 credentialsToDelete:(id)a4 registeredRegions:(id)a5;

@end
