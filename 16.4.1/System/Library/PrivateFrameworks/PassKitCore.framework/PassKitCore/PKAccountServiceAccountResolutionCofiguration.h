@class PKCreditInstallmentPlan;
@protocol PKBusinessChatContext;

@interface PKAccountServiceAccountResolutionCofiguration : NSObject

@property (retain, nonatomic) PKCreditInstallmentPlan *earlyInstallmentPlan;
@property (retain, nonatomic) id<PKBusinessChatContext> businessChatContext;

- (id)description;
- (void).cxx_destruct;

@end
