@class NSString, CTXPCServiceSubscriptionContext;

@interface TPSRequest : NSObject <TPSSecureObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;

- (id)archivedDataWithError:(id *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithSubscriptionContext:(id)a0;

@end
