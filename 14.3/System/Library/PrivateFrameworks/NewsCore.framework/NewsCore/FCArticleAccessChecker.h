@class FCPrivateChannelMembershipController;
@protocol FCPaidAccessCheckerType;

@interface FCArticleAccessChecker : FCMultiAccessChecker

@property (readonly, nonatomic) id<FCPaidAccessCheckerType> paidAccessChecker;
@property (readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaidAccessChecker:(id)a0 privateChannelMembershipController:(id)a1;
- (id)initWithAccessCheckers:(id)a0;

@end
