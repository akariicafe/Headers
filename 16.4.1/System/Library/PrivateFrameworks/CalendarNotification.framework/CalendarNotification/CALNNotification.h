@class CALNNotificationRequest, NSDate;

@interface CALNNotification : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) CALNNotificationRequest *request;

+ (id)notificationWithRequest:(id)a0 date:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToNotification:(id)a0;
- (id)initWithNotificationRequest:(id)a0 date:(id)a1;

@end
