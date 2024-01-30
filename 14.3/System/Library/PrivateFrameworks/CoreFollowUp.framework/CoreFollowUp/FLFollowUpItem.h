@class NSString, FLFollowUpNotification, NSData, NSArray, NSDictionary;

@interface FLFollowUpItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sqlID;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *delegateMachServiceName;
@property (retain, nonatomic) NSData *_userInfoData;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) FLFollowUpNotification *notification;
@property (nonatomic) BOOL showInSettings;
@property (copy, nonatomic) NSString *targetBundleIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *informativeText;
@property (copy, nonatomic) NSString *informativeFooterText;
@property (copy, nonatomic) NSString *representingBundlePath;
@property (copy, nonatomic) NSString *bundleIconName;
@property unsigned long long displayStyle;
@property (copy) NSString *categoryIdentifier;
@property (copy) NSString *extensionIdentifier;
@property (copy) NSArray *actions;
@property (copy) NSDictionary *userInfo;
@property BOOL shouldPersistWhenActivated;
@property BOOL shouldPersistWhenDismissed;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithoutDefaults;
- (BOOL)isHSA2LoginItem;
- (BOOL)isHSA2PasswordResetItem;

@end
