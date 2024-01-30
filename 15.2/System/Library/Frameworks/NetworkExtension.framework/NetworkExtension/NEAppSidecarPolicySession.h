@class NEPolicySession, NSMutableArray;

@interface NEAppSidecarPolicySession : NSObject

@property (retain) NEPolicySession *policySession;
@property (retain) NSMutableArray *policyIDList;

+ (id)connectionIdentifier;

- (void).cxx_destruct;
- (id)init;
- (BOOL)installPolicies;
- (BOOL)uninstallPolicies;

@end
