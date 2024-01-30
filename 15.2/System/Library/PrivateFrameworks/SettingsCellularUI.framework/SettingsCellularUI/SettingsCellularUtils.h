@interface SettingsCellularUtils : NSObject

+ (id)formattedPhoneNumber:(id)a0;
+ (BOOL)isUIDualSIM;
+ (id)singleSIMUISubscriptionContext;
+ (BOOL)supportsWiFiCalling:(id)a0;
+ (BOOL)isUISingleSIM;
+ (BOOL)shouldShowPendingTransferPlanOnPad;
+ (id)singleSIMUIServiceDescriptor;

@end
