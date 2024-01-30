@class NSString, NSArray;

@interface CKNotificationInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

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
@property (copy, nonatomic) NSString *soundName;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) BOOL shouldBadge;
@property (nonatomic) BOOL shouldSendContentAvailable;
@property (nonatomic) BOOL shouldSendMutableContent;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *collapseIDKey;

+ (id)notificationInfo;

- (void)_setCategoryNoValidate:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setTitleNoValidate:(id)a0;
- (void)_setAlertLocalizationArgsNoValidate:(id)a0;
- (void)_setSoundNameNoValidate:(id)a0;
- (void)_setSubtitleLocalizationArgsNoValidate:(id)a0;
- (void)_setSubtitleLocalizationKeyNoValidate:(id)a0;
- (void)_setShouldBadgeNoValidate:(BOOL)a0;
- (void)_setAlertBodyNoValidate:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)_setTitleLocalizationArgsNoValidate:(id)a0;
- (void)_setAlertActionLocalizationKeyNoValidate:(id)a0;
- (void)_setTitleLocalizationKeyNoValidate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_setAlertLocalizationKeyNoValidate:(id)a0;
- (void)_setSubtitleNoValidate:(id)a0;
- (void)_setShouldSendMutableContentNoValidate:(BOOL)a0;
- (void)_setShouldSendContentAvailableNoValidate:(BOOL)a0;
- (id)debugDescription;
- (void)_setAlertLaunchImageNoValidate:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
