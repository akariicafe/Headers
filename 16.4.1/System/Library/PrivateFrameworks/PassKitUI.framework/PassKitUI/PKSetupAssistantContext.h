@class NSData, NSString;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKSetupAssistantContext : NSObject <PKPaymentSetupAssistantContextProtocol>

@property (nonatomic) unsigned long long setupAssistant;
@property (retain, nonatomic) NSData *externalizedContext;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSetupAssistant:(unsigned long long)a0;
- (void)extendableDescription:(id)a0;

@end
