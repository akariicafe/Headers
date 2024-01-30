@class UINavigationController, NSArray, WFNetworkScanRecord, NSData, NSString, WFOtherNetworkViewController, UIViewController;

@interface WFWAPICertificatePromptOperation : WFOperation <WFOtherNetworkViewControllerDelegate>

@property (nonatomic) BOOL userCancelled;
@property (nonatomic) struct __SecIdentity { } *WAPIRootCertificate;
@property (retain, nonatomic) NSData *WAPIIdentityPEMBlob;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (retain, nonatomic) WFOtherNetworkViewController *promptViewController;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) NSArray *wapiIdentityMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (void)start;
- (void).cxx_destruct;
- (void)otherNetworkViewControllerUserDidTapCancel:(id)a0;
- (void)otherNetworkViewControllerUserDidTapJoin:(id)a0;
- (id)initWithRootViewController:(id)a0 network:(id)a1;
- (BOOL)otherNetworkViewController:(id)a0 isValidPassword:(id)a1;

@end
