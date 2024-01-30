@class NSString, UNNotificationContent, UNNotificationTrigger;

@interface UNNotificationRequest : NSObject <UNNotificationSecurityScopeProviding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long destinations;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) UNNotificationContent *content;
@property (readonly, copy, nonatomic) UNNotificationTrigger *trigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithIdentifier:(id)a0 pushPayload:(id)a1 bundleIdentifier:(id)a2;
+ (id)requestWithIdentifier:(id)a0 content:(id)a1 trigger:(id)a2;
+ (id)requestWithIdentifier:(id)a0 content:(id)a1 trigger:(id)a2 destinations:(unsigned long long)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)leaveSecurityScope;
- (id)_initWithIdentifier:(id)a0 content:(id)a1 trigger:(id)a2 destinations:(unsigned long long)a3;
- (void)addSecurityScope:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeSecurityScope;
- (void)enterSecurityScope;
- (unsigned long long)_notificationDestinationsForInterruptionLevel:(unsigned long long)a0 inputDestinations:(unsigned long long)a1;
- (void).cxx_destruct;

@end
