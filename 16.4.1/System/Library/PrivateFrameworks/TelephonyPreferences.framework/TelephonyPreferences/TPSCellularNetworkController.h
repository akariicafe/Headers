@class NSArray, CTNetworkSelectionInfo, CTXPCServiceSubscriptionContext, TPSCellularNetworkItem, NSString, TPSRegistrationTelephonyController;

@interface TPSCellularNetworkController : NSObject <TPSRegistrationTelephonyControllerDelegate>

@property (copy, nonatomic) NSArray *networkItems;
@property (nonatomic) long long networkSelectionMode;
@property (retain, nonatomic) TPSCellularNetworkItem *selectedNetworkItem;
@property (readonly, nonatomic) TPSRegistrationTelephonyController *registrationController;
@property (copy, nonatomic) NSArray *networks;
@property (retain, nonatomic) CTNetworkSelectionInfo *networkSelectionInfo;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly, nonatomic, getter=isNetworkSelectionEnabled) BOOL networkSelectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSubscriptionContext:(id)a0;
- (id)networkItemAtIndex:(long long)a0;
- (id)networkItemForNetwork:(id)a0;
- (void)networkSelectionInfoChangedForRegistrationController:(id)a0;
- (void)networksChangedForRegistrationController:(id)a0;
- (void)selectNetworkItemAtIndex:(unsigned long long)a0;
- (void)selectNetworkSelectionMode:(long long)a0;
- (void)updateNetworkSelectionModeForNetworkSelectionInfo:(id)a0;
- (void)updateSelectedNetworkForNetworkSelectionInfo:(id)a0;

@end
