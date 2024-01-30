@class PKCurrencyAmount, NSDictionary, NPKProtoRemotePassActionSelectItemResponse;

@interface NPKRemotePassActionSelectItemResponse : NPKRemotePassActionResponse {
    PKCurrencyAmount *_cachedCurrencyAmount;
    NSDictionary *_cachedServiceProviderData;
}

@property (retain, nonatomic) NPKProtoRemotePassActionSelectItemResponse *protoResponse;

- (id)identifier;
- (id)description;
- (id)currencyAmount;
- (void).cxx_destruct;
- (int)result;
- (id)serviceProviderData;
- (id)initWithIdentifier:(id)a0 cardType:(unsigned long long)a1 passOrganizationName:(id)a2 result:(int)a3 incrementAmount:(long long)a4 currencyCode:(id)a5 serviceProviderDataData:(id)a6 image:(id)a7 passLocalizedDesciption:(id)a8 caption:(id)a9 summaryText:(id)a10 message:(id)a11;
- (id)initWithRenewalAmount:(id)a0 serviceProviderData:(id)a1 fromRequest:(id)a2 withResult:(int)a3;

@end
