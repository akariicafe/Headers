@class PKInstallmentPlan;
@protocol PKBusinessChatContext;

@interface PKAccountServiceAccountResolutionCofiguration : NSObject

@property (retain, nonatomic) PKInstallmentPlan *earlyInstallmentPlan;
@property (retain, nonatomic) id<PKBusinessChatContext> businessChatContext;

- (void).cxx_destruct;
- (id)description;

@end
