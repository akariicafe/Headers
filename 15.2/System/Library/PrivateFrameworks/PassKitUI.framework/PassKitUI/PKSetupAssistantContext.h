@class NSData;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKSetupAssistantContext : NSObject

@property (retain, nonatomic) NSData *externalizedContext;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;

- (id)description;
- (void).cxx_destruct;
- (void)_updateDescription:(id)a0;

@end
