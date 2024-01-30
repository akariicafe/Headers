@class ACAccount, FARequestConfigurator;

@interface FASharedServicesRequest : AARequest {
    FARequestConfigurator *_requestConfigurator;
    ACAccount *_appleAccount;
}

+ (Class)responseClass;

- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAppleAccount:(id)a0 urlString:(id)a1;

@end
