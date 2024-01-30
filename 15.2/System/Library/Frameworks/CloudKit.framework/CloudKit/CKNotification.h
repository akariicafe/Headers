@class CKContainerID, CKRecordID, NSString, CKNotificationID, NSArray, NSNumber;

@interface CKNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long notificationType;
@property (copy, nonatomic) CKNotificationID *notificationID;
@property (copy, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) CKRecordID *subscriptionOwnerUserRecordID;
@property (nonatomic) BOOL isPruned;
@property (copy, nonatomic) NSString *alertBody;
@property (copy, nonatomic) NSString *alertLocalizationKey;
@property (copy, nonatomic) NSArray *alertLocalizationArgs;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleLocalizationKey;
@property (copy, nonatomic) NSArray *titleLocalizationArgs;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *subtitleLocalizationKey;
@property (copy, nonatomic) NSArray *subtitleLocalizationArgs;
@property (copy, nonatomic) NSString *alertActionLocalizationKey;
@property (copy, nonatomic) NSString *alertLaunchImage;
@property (copy, nonatomic) NSNumber *badge;
@property (copy, nonatomic) NSString *soundName;
@property (copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, copy, nonatomic) NSString *subscriptionID;

+ (id)notificationFromRemoteNotificationDictionary:(id)a0;
+ (id)_realNotificationFromRemoteNotificationDictionary:(id)a0;

- (void)setContainerIdentifier:(id)a0;
- (void)setSubscriptionID:(id)a0;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)_initBare;
- (id)initWithCoder:(id)a0;
- (BOOL)isRead;
- (id)initWithRemoteNotificationDictionary:(id)a0;

@end
