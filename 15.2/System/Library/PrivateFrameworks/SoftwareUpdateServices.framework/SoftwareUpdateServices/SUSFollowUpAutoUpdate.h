@interface SUSFollowUpAutoUpdate : SUSFollowUp

+ (unsigned long long)displayStyle;
+ (id)extensionIdentifier;
+ (id)identifier;
+ (id)actions;
+ (id)titleWithDescriptor:(id)a0;
+ (id)informativeTextWithDescriptor:(id)a0;
+ (id)notificationWithDescriptor:(id)a0;
+ (id)notificationTitleWithDescriptor:(id)a0;
+ (id)notificationInformativeTextWithDescriptor:(id)a0;
+ (id)notificationInstallNowAction;
+ (id)notificationInstallLater;
+ (double)notificationFrequency;
+ (id)notificationOptions;

@end
