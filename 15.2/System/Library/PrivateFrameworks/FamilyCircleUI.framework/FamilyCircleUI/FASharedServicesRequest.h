@class ACAccount, FARequestConfigurator;

@interface FASharedServicesRequest : AARequest {
    FARequestConfigurator *_requestConfigurator;
    ACAccount *_appleAccount;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithAppleAccount:(id)a0 urlString:(id)a1;

@end
