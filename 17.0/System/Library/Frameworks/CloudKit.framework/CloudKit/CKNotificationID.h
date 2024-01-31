@class NSString;

@interface CKNotificationID : NSObject <CKXPCSuitableString, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *notificationUUID;

+ (void)initialize;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CKXPCSuitableString;
- (id)initWithNotificationUUID:(id)a0;

@end
