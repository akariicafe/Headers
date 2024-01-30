@interface SettingsCellularUtils : NSObject

+ (id)formattedPhoneNumber:(id)a0;
+ (BOOL)isUIDualSIM;
+ (BOOL)isUISingleSIM;
+ (BOOL)shouldShowPendingTransferPlanOnPad;
+ (id)singleSIMUIServiceDescriptor;
+ (id)singleSIMUISubscriptionContext;
+ (BOOL)supportsWiFiCalling:(id)a0;

@end
