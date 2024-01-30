@class NSData, FAFamilyMember, NSString;
@protocol PKPassLibraryDataProvider, PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate;

@interface PKBridgeSetupAssistantContext : PKSetupAssistantContext <PKPaymentSetupAssistantBridgeContextProtocol>

@property (retain, nonatomic) id<PKPassLibraryDataProvider> dataProvider;
@property (weak, nonatomic) id<PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> peerPaymentDelegate;
@property (retain, nonatomic) FAFamilyMember *pairingFamilyMember;
@property (retain, nonatomic) FAFamilyMember *parentFamilyMember;
@property (readonly, nonatomic) unsigned long long setupAssistant;
@property (retain, nonatomic) NSData *externalizedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)extendableDescription:(id)a0;

@end
