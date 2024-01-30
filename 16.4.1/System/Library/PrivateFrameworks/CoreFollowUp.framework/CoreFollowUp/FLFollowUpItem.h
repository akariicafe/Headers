@class NSString, FLFollowUpNotification, NSData, NSArray, NSDictionary, NSDate;

@interface FLFollowUpItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sqlID;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *delegateMachServiceName;
@property (retain, nonatomic) NSData *_userInfoData;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *collectionIdentifier;
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
@property (copy) NSString *accountIdentifier;
@property (copy) NSString *typeIdentifier;
@property (copy) NSArray *actions;
@property (copy) NSDictionary *userInfo;
@property (copy) NSDate *expirationDate;
@property (readonly) BOOL isExpired;
@property BOOL shouldPersistWhenActivated;
@property BOOL shouldPersistWhenDismissed;

+ (long long)_daysRemaining:(id)a0 ceiling:(BOOL)a1;
+ (id)_expirationDateFormatter;

- (BOOL)_shouldAdjustInstanceToMidnight;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isHSA2PasswordResetItem;
- (id)formattedExpirationDate;
- (id)_informativeNotificationTextOrDate;
- (id)initWithoutDefaults;
- (BOOL)isHSA2LoginItem;
- (id)init;
- (BOOL)displayExpirationDate;
- (id)_midnightAdjustedDate;
- (id)description;
- (id)_priorityFlagString;
- (void).cxx_destruct;
- (id)_styleFlagsString;

@end
