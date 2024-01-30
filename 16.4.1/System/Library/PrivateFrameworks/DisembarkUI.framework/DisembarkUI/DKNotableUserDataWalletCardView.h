@class NSString, NSMutableDictionary;

@interface DKNotableUserDataWalletCardView : DKNotableUserDataCardView <PKPaymentSetupAssistantProvisioningContextDelegate>

@property (retain, nonatomic) NSMutableDictionary *featureCardCellMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;
- (struct CGSize { double x0; double x1; })setupAssistantCredentialCardArtSize;
- (void)setupAssistantCredentialUpdatedCardArt:(id)a0;
- (void)addCardCell:(id)a0;

@end
