@class NSString, NSSet, NSDictionary;

@interface PKWebServiceVirtualCardFeature : PKWebServiceRegionFeature

@property (readonly, copy, nonatomic) NSString *merchantId;
@property (readonly, copy, nonatomic) NSSet *implicitlySupportedNetworks;
@property (copy, nonatomic) NSDictionary *networks;

+ (id)virtualCardFeatureWithWebService:(id)a0;

- (id)initWithFeatureType:(long long)a0 dictionary:(id)a1 region:(id)a2;
- (void).cxx_destruct;
- (BOOL)doesPaymentApplication:(id)a0 supportVPANOnDevice:(id)a1;

@end
