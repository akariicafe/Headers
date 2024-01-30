@class NSSet, NSDictionary;

@interface CRKIDSAccountsState : NSObject

@property (readonly, nonatomic) unsigned long long summary;
@property (readonly, copy, nonatomic) NSSet *activeLoginIDs;
@property (readonly, copy, nonatomic) NSSet *inactiveLoginIDs;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;

+ (id)stateForAccounts:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithActiveLoginIDs:(id)a0 inactiveLoginIDs:(id)a1;

@end
