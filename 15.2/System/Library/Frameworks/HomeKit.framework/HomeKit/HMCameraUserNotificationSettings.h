@class NSPredicate, NSString, NSArray;

@interface HMCameraUserNotificationSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long version;
@property (getter=isAccessModeChangeNotificationEnabled) BOOL accessModeChangeNotificationEnabled;
@property (getter=isReachabilityEventNotificationEnabled) BOOL reachabilityEventNotificationEnabled;
@property (getter=isSmartBulletinBoardNotificationEnabled) BOOL smartBulletinBoardNotificationEnabled;
@property (copy) NSPredicate *smartBulletinBoardNotificationCondition;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
