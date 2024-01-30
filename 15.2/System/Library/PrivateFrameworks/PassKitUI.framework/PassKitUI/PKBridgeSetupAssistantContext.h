@class FAFamilyMember;
@protocol PKPassLibraryDataProvider, PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate;

@interface PKBridgeSetupAssistantContext : PKSetupAssistantContext

@property (retain, nonatomic) id<PKPassLibraryDataProvider> dataProvider;
@property (weak, nonatomic) id<PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> peerPaymentDelegate;
@property (retain, nonatomic) FAFamilyMember *pairingFamilyMember;
@property (retain, nonatomic) FAFamilyMember *parentFamilyMember;

- (void).cxx_destruct;
- (void)_updateDescription:(id)a0;

@end
