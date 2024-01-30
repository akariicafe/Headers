@class NEPolicySession, NSMutableArray;

@interface NEAppSidecarPolicySession : NSObject

@property (retain) NEPolicySession *policySession;
@property (retain) NSMutableArray *policyIDList;

+ (id)connectionIdentifier;

- (id)init;
- (void).cxx_destruct;
- (BOOL)installPolicies;
- (BOOL)uninstallPolicies;

@end
