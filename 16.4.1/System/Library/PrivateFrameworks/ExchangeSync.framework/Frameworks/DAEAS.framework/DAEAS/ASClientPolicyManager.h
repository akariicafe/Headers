@class NSString;

@interface ASClientPolicyManager : ASPolicyManager

@property (retain, nonatomic) NSString *powerAssertionGroupIdentifier;

- (void)setDelegate:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)policyFailedToUpdate;
- (void)policyKeyChanged:(id)a0;
- (void)requestPolicyUpdate;

@end
