@class NSString, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface TUCoreTelephonyClient : NSObject <TUTTYCoreTelephonyClient, TUEmergencyCoreTelephonyClient, TUCoreTelephonyClient>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CoreTelephonyClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)RTTTelephonyUtilitiesClass;
+ (Class)RTTSettingsClass;
+ (id)sharedRTTTelephonyUtilities;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)subscriptionForLabelIdentifier:(id)a0;
- (BOOL)inEmergencyMode;
- (BOOL)isDialAssistSupportedForSubscriptionLabelIdentifier:(id)a0 error:(id *)a1;
- (BOOL)isEmergencyNumberForDigits:(id)a0 subscription:(id)a1 error:(id *)a2;
- (BOOL)isEmergencyNumberForDigits:(id)a0 subscriptionUUID:(id)a1 error:(id *)a2;
- (BOOL)isRTTSupportedForSubscription:(id)a0;
- (BOOL)isRTTSupportedForSubscriptionUUID:(id)a0;
- (BOOL)isTTYEnabledForSubscription:(id)a0;
- (BOOL)isTTYEnabledForSubscriptionUUID:(id)a0;
- (BOOL)isTTYHardwareAvailableForSubscription:(id)a0;
- (BOOL)isTTYHardwareAvailableForSubscriptionUUID:(id)a0;
- (BOOL)isTTYHardwareEnabledForSubscription:(id)a0;
- (BOOL)isTTYHardwareEnabledForSubscriptionUUID:(id)a0;
- (BOOL)isTTYHardwareSupportedForSubscription:(id)a0;
- (BOOL)isTTYHardwareSupportedForSubscriptionUUID:(id)a0;
- (BOOL)isTTYSoftwareAvailableForSubscription:(id)a0;
- (BOOL)isTTYSoftwareAvailableForSubscriptionUUID:(id)a0;
- (BOOL)isTTYSoftwareEnabledForSubscription:(id)a0;
- (BOOL)isTTYSoftwareEnabledForSubscriptionUUID:(id)a0;
- (BOOL)isTTYSoftwareSupportedForSubscription:(id)a0;
- (BOOL)isTTYSoftwareSupportedForSubscriptionUUID:(id)a0;
- (BOOL)isTTYSupportedForSubscription:(id)a0;
- (BOOL)isTTYSupportedForSubscriptionUUID:(id)a0;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(id)a0 subscription:(id)a1 error:(id *)a2;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(id)a0 subscriptionUUID:(id)a1 error:(id *)a2;
- (id)objectForKey:(id)a0 subscriptionLabelIdentifier:(id)a1 error:(id *)a2;
- (unsigned long long)preferredTransportMethodForSubscription:(id)a0;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSubscription:(id)a0 error:(id *)a1;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(id)a0 error:(id *)a1;
- (id)subscriptionForUUID:(id)a0;
- (id)testEmergencyHandleForSubscriptionLabelIdentifier:(id)a0 error:(id *)a1;

@end
