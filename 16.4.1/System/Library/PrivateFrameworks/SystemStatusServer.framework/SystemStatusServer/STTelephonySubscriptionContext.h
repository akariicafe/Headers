@class NSString, NSArray, STMutableTelephonyCarrierBundleInfo, STMutableTelephonyMobileEquipmentInfo, STMutableTelephonySubscriptionInfo;

@interface STTelephonySubscriptionContext : NSObject <BSDebugDescriptionProviding>

@property (retain, nonatomic) STMutableTelephonySubscriptionInfo *subscriptionInfo;
@property (nonatomic) BOOL *fakeServiceCanceled;
@property (nonatomic) BOOL *fakeRegistrationCanceled;
@property (nonatomic) BOOL *fakeCellularRegistrationCanceled;
@property (nonatomic, getter=isPretendingToSearch) BOOL pretendingToSearch;
@property (copy, nonatomic) NSString *cachedCTRegistrationDisplayStatus;
@property (copy, nonatomic) NSString *cachedCTRegistrationCellularStatus;
@property (nonatomic) unsigned long long modemDataConnectionType;
@property (copy, nonatomic) NSString *cachedCTOperatorName;
@property (copy, nonatomic) NSArray *statusBarImages;
@property (retain, nonatomic) STMutableTelephonyCarrierBundleInfo *carrierBundleInfo;
@property (retain, nonatomic) STMutableTelephonyMobileEquipmentInfo *mobileEquipmentInfo;
@property (readonly, nonatomic, getter=isFakingService) BOOL fakingService;
@property (readonly, nonatomic, getter=isFakingRegistration) BOOL fakingRegistration;
@property (readonly, nonatomic, getter=isFakingCellularRegistration) BOOL fakingCellularRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
