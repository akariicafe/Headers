@class WFHealthIssue, NSArray, WFNetworkScanRecord, NSString, WFUserSuppliedNetwork, WFNetworkProfile, UIViewController;
@protocol WFNetworkView;

@interface WFOtherNetworkContext : WFCredentialsContext <WFContextPresenting, WFOtherNetworkProviderContext, WFOtherNetworkViewControllerDelegate>

@property (retain, nonatomic) NSArray *WAPIRootCertificates;
@property (retain, nonatomic) NSArray *WAPIIdentities;
@property (retain, nonatomic) NSArray *availableTLSIdentities;
@property (nonatomic) long long requestedFields;
@property (retain, nonatomic) WFNetworkProfile *profile;
@property (retain, nonatomic) WFNetworkScanRecord *network;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long availableAuthTraits;
@property (nonatomic) BOOL isUsingRandomMACAddress;
@property (nonatomic) BOOL supportsRandomMACAddress;
@property (copy, nonatomic) NSString *randomMACAddress;
@property (copy, nonatomic) NSString *hardwareMACAddress;
@property (retain, nonatomic) WFUserSuppliedNetwork *userSuppliedNetwork;
@property (copy, nonatomic) id /* block */ actionHandler;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (readonly, nonatomic) BOOL needsDismissal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL WAPIEnabled;
@property (readonly, nonatomic, getter=isPasswordSharingSupported) BOOL passwordSharingSupported;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic, getter=isEnterprise) BOOL enterprise;
@property (readonly, nonatomic) WFHealthIssue *securityIssue;

- (long long)securityMode;
- (id)initWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)saveHardwareMAC;
- (void)gatherCredentials:(id /* block */)a0;
- (void)otherNetworkViewControllerUserDidTapCancel:(id)a0;
- (void)otherNetworkViewControllerUserDidTapJoin:(id)a0;
- (void)saveRandomMAC;
- (BOOL)validateCredentials;
- (BOOL)validatePassword;
- (void)_updateActivityStringForError:(id)a0 networkName:(id)a1;
- (void)finishWithError:(id)a0 forNetwork:(id)a1 profile:(id)a2;
- (id)initWithType:(unsigned long long)a0 authTraits:(long long)a1 supportRandomAddress:(BOOL)a2 useRandomAddress:(BOOL)a3 randomMACAddress:(id)a4 hardwareMACAddress:(id)a5;
- (BOOL)otherNetworkViewController:(id)a0 isValidPassword:(id)a1;

@end
