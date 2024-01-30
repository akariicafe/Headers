@class NSSet;

@interface TUConversationInvitationPreference : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *standardInvitationPreferencesForLink;
@property (class, readonly, nonatomic) NSSet *letMeInResponseInvitationPreferences;
@property (class, readonly, nonatomic) NSSet *incomingCallInvitationPreferences;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long handleType;
@property (readonly, nonatomic) long long notificationStyles;

+ (long long)validateNotificationStyles:(long long)a0;
+ (id)invitationPreferencesForAllHandlesWithStyles:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToInvitationPreference:(id)a0;
- (id)initWithHandleType:(long long)a0 notificationStyles:(long long)a1;

@end
