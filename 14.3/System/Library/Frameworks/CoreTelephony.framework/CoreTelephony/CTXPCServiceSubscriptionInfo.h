@class NSArray;

@interface CTXPCServiceSubscriptionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *subscriptions;
@property (retain, nonatomic) NSArray *subscriptionsInUse;
@property (retain, nonatomic) NSArray *subscriptionsValid;

- (void).cxx_destruct;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
