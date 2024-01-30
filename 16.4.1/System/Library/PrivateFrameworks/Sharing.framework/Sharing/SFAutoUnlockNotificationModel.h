@class NSString, NSData;

@interface SFAutoUnlockNotificationModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *modelIdentifier;
@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *navBarTitle;
@property (retain, nonatomic) NSData *applicationIconData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceName:(id)a0 modelIdentifier:(id)a1 type:(long long)a2;

@end
