@class NSString;

@interface IDSCarrierTokenRequestParameters : NSObject

@property (readonly, nonatomic) long long subscriptionSource;
@property (readonly, nonatomic) NSString *IMEI;
@property (readonly, nonatomic) NSString *carrierNonce;

- (void).cxx_destruct;
- (id)initWithSubscriptionSource:(long long)a0 IMEI:(id)a1 carrierNonce:(id)a2;

@end
