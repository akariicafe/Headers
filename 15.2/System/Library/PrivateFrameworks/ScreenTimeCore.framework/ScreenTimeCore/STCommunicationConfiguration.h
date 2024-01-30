@interface STCommunicationConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL isCommunicationSafetySendingRestricted;
@property (readonly) BOOL isCommunicationSafetyReceivingRestricted;
@property (readonly) BOOL isCommunicationSafetyNotificationEnabled;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCommunicationSafetySendingRestricted:(BOOL)a0 communicationSafetyReceivingRestricted:(BOOL)a1 communicationSafetyNotificationEnabled:(BOOL)a2;
- (BOOL)isEqualToCommunicationConfiguration:(id)a0;

@end
