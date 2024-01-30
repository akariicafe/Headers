@class NSString, NSURL, NSDictionary;

@interface PKMapsTransitMessage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long maxNotificationCount;
@property (readonly, nonatomic) NSString *localizedMessage;
@property (readonly, nonatomic) NSString *localizedActionTitle;
@property (readonly, nonatomic) NSURL *actionURL;
@property (readonly, nonatomic) long long iconType;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)a0 message:(id)a1 actionTitle:(id)a2 actionURL:(id)a3 iconType:(long long)a4 userInfo:(id)a5;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
