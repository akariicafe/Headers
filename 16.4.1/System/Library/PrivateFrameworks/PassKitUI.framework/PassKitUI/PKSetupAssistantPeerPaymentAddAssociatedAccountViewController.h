@class NSString;
@protocol PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate;

@interface PKSetupAssistantPeerPaymentAddAssociatedAccountViewController : PKPeerPaymentAddAssociatedAccountViewController <PKPeerPaymentAssociatedAccountSetupDelegate, PKSetupAssistantStep> {
    id<PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> _setupAssistantDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;
+ (BOOL)bridgeSetupAssistantNeedsToRunWithContext:(id)a0 returningRequirements:(unsigned long long *)a1;
+ (id)defaultWebServiceForContext:(long long)a0;
+ (BOOL)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)a0;

- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)a0;
- (void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)a0 updatedAccount:(id)a1 forFamilyMember:(id)a2;
- (id)initWithPairingFamilyMember:(id)a0 parentFamilyMember:(id)a1 webService:(id)a2 passLibraryDataProvider:(id)a3 delegate:(id)a4 context:(long long)a5;

@end
