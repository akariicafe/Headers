@class NSString;

@interface IDSCarrierTokenRequestParameters : NSObject

@property (readonly, nonatomic) long long subscriptionSource;
@property (readonly, nonatomic) NSString *IMEI;
@property (readonly, nonatomic) NSString *carrierNonce;

- (id)initWithSubscriptionSource:(long long)a0 IMEI:(id)a1 carrierNonce:(id)a2;
- (void).cxx_destruct;

@end
