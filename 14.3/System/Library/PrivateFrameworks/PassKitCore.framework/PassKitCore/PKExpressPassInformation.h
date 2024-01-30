@class NSString, NSDictionary;

@interface PKExpressPassInformation : NSObject <NSSecureCoding> {
    NSDictionary *_configuration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic) NSString *passUniqueIdentifier;
@property (readonly, nonatomic) NSDictionary *subcredentialCredentialIdentifiers;
@property (readonly, nonatomic) NSDictionary *subcredentialEndpointIdentifiers;
@property (nonatomic) BOOL forceModernEncoding;
@property (readonly, nonatomic) NSString *paymentApplicationIdentifier;
@property (readonly, nonatomic) NSString *expressMode;
@property (readonly, nonatomic) long long expressPassType;

- (id)init;
- (void).cxx_destruct;
- (void)_createLegacyPropertiesIfNecessary;
- (id)_initForPaymentPass:(id)a0 configuration:(id)a1 subcredentialCredentialIdentifiers:(id)a2;
- (void)enumerateCriteriaWithHandler:(id /* block */)a0;
- (void)_createModernPropertiesIfNecessary;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initForExpressMode:(id)a0 withPassUniqueIdentifier:(id)a1 paymentApplicationIdentifier:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)criteriaForPaymentApplicationIdentifier:(id)a0;
- (id)initForPaymentPass:(id)a0 withTechologyTest:(id /* block */)a1;
- (id)initDummyExpressInfoForAutomaticSelectionCriteriaUpgradeRequest:(id)a0 paymentPass:(id)a1 withTechologyTest:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (id)paymentApplicationIdentifiers;

@end
