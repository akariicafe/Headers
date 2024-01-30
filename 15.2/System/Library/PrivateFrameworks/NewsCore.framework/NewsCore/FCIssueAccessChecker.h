@class FCPrivateChannelMembershipController;
@protocol FCPaidAccessCheckerType;

@interface FCIssueAccessChecker : FCMultiAccessChecker

@property (readonly, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAccessCheckers:(id)a0;
- (id)initWithPaidAccessChecker:(id)a0 privateChannelMembershipController:(id)a1;

@end
