@class FCPrivateChannelMembershipController;
@protocol FCPaidAccessCheckerType;

@interface FCIssueAccessChecker : FCMultiAccessChecker

@property (readonly, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)initWithAccessCheckers:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPaidAccessChecker:(id)a0 privateChannelMembershipController:(id)a1;

@end
