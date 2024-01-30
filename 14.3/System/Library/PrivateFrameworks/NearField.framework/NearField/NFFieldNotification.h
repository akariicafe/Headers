@interface NFFieldNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long notificationType;
@property (readonly) unsigned int rfTechnology;
@property (readonly) unsigned short typeFSystemCode;

+ (id)notificationWithDictionary:(id)a0;

- (void)setNotificationType:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
