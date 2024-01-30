@class NSString;

@interface ASClientPolicyManager : ASPolicyManager

@property (retain, nonatomic) NSString *powerAssertionGroupIdentifier;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)policyKeyChanged:(id)a0;
- (void)policyFailedToUpdate;
- (void)requestPolicyUpdate;

@end
