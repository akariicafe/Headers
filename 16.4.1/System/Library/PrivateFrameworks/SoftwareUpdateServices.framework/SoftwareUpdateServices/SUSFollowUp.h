@interface SUSFollowUp : NSObject

+ (unsigned long long)displayStyle;
+ (id)categoryIdentifier;
+ (id)actions;
+ (id)representingBundlePath;
+ (id)identifier;
+ (id)groupIdentifier;
+ (id)extensionIdentifier;
+ (id)bundleIconName;
+ (id)uniqueIdentifier;
+ (id)generateFollowUpWithDescriptor:(id)a0 userInfo:(id)a1;
+ (id)informativeTextWithDescriptor:(id)a0;
+ (id)notificationWithDescriptor:(id)a0;
+ (id)titleWithDescriptor:(id)a0;

@end
