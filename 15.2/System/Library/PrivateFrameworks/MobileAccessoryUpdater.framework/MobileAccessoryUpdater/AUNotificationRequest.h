@class NSString;

@interface AUNotificationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *accessoryName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initUnplugReplugNotificationWithAccessoryName:(id)a0;

@end
