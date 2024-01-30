@class NSString, CALNNotificationContent, NSDate;

@interface CALNNotificationRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier;
@property (readonly, copy, nonatomic) CALNNotificationContent *content;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL shouldPresentAlert;
@property (readonly, nonatomic) BOOL hasAlertContent;
@property (readonly, nonatomic) BOOL shouldPlaySound;
@property (readonly, nonatomic) BOOL hasSound;

- (BOOL)isEqualToRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1 content:(id)a2;
- (id)initWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1 content:(id)a2 date:(id)a3 shouldPresentAlert:(BOOL)a4 shouldPlaySound:(BOOL)a5;

@end
