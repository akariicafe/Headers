@class NSString;

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long kind;
@property (copy, nonatomic) NSString *identifier;

+ (id)currentSource;
+ (id)subscriptionSourceForAppWithBundleID:(id)a0;
+ (id)subscriptionSourceForWebsiteWithURL:(id)a0;
+ (id)subscriptionSourceForWebsiteWithDomainName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
