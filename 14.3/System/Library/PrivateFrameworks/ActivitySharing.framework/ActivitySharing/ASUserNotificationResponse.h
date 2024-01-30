@class NSString, NSDictionary;

@interface ASUserNotificationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithActionIdentifier:(id)a0 userInfo:(id)a1;

@end
