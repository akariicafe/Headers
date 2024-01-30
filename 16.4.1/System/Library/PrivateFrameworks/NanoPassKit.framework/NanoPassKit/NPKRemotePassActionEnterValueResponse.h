@class PKCurrencyAmount, NPKProtoRemotePassActionEnterValueResponse;

@interface NPKRemotePassActionEnterValueResponse : NPKRemotePassActionResponse {
    PKCurrencyAmount *_cachedCurrencyAmount;
}

@property (retain, nonatomic) NPKProtoRemotePassActionEnterValueResponse *protoResponse;

- (int)result;
- (id)identifier;
- (id)description;
- (void).cxx_destruct;
- (id)currencyAmount;
- (id)initWithIdentifier:(id)a0 cardType:(unsigned long long)a1 passOrganizationName:(id)a2 result:(int)a3 incrementAmount:(long long)a4 currencyCode:(id)a5 image:(id)a6 passLocalizedDesciption:(id)a7 caption:(id)a8 summaryText:(id)a9 message:(id)a10;
- (id)initWithTopUpAmount:(id)a0 fromRequest:(id)a1 withResult:(int)a2;

@end
