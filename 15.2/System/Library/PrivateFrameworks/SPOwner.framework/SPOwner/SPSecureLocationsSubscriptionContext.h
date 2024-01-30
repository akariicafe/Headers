@class NSString, NSDictionary;

@interface SPSecureLocationsSubscriptionContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long subscriptionMode;
@property (copy, nonatomic) NSString *clientApp;
@property (nonatomic) long long fetchMode;
@property (retain, nonatomic) NSDictionary *pushIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
