@class NSSet, NSString, NSURL;

@interface PKPaymentMarketsConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSSet *markets;
@property (readonly, copy) NSString *version;
@property (readonly, copy) NSURL *url;

+ (void)paymentMarketsConfigurationWithURL:(id)a0 forDeviceClass:(id)a1 version:(id)a2 completion:(id /* block */)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)closestMarketForLocation:(id)a0;
- (id)expressCredentialTypesForLocation:(id)a0;
- (id)expressTransitNetworksForLocation:(id)a0;
- (id)initWithDictionary:(id)a0 url:(id)a1 forDeviceClass:(id)a2 version:(id)a3;
- (id)marketsForLocation:(id)a0;
- (id)marketsForLocation:(id)a0 ofType:(long long)a1;
- (id)marketsForRegions:(id)a0;
- (id)supportedCredentialTypesForLocation:(id)a0;
- (id)supportedTransitNetworksForLocation:(id)a0;

@end
