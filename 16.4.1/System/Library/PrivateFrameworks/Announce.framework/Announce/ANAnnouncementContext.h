@class NSString, NSDictionary, NSURL, NSNumber;

@interface ANAnnouncementContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *announcementID;
@property (readonly, nonatomic) NSString *groupID;
@property (readonly, nonatomic) NSString *announcerID;
@property (readonly, nonatomic) NSString *announcerName;
@property (readonly, nonatomic) NSString *announcerUserUniqueID;
@property (readonly, nonatomic) NSString *announcerUserID;
@property (readonly, nonatomic) BOOL announcerIsAccessory;
@property (readonly, nonatomic) NSString *homeName;
@property (readonly, nonatomic) NSString *homeID;
@property (readonly, nonatomic) int productType;
@property (readonly, nonatomic) unsigned long long productTypeOverride;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) int deviceClass;
@property (readonly, nonatomic) NSDictionary *rooms;
@property (readonly, nonatomic) NSDictionary *zones;
@property (readonly, nonatomic) NSURL *announcementAudioURL;
@property (readonly, nonatomic) NSString *announcementAudioPath;
@property (readonly, nonatomic) NSNumber *audioFileDuration;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *transcriptionText;
@property (readonly, nonatomic) BOOL played;
@property (readonly, nonatomic) NSDictionary *contextDictionary;

+ (id)contextFromDictionary:(id)a0;
+ (id)contextFromUserInfo:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToContext:(id)a0;
- (id)description;
- (id)initWithUserInfo:(id)a0;
- (void).cxx_destruct;

@end
