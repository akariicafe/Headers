@class NSString, NSDictionary;

@interface PKExpressPassInformation : NSObject <NSSecureCoding> {
    NSDictionary *_configuration;
    NSString *_v0_expressMode;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long cardType;
@property (readonly, nonatomic) NSString *passUniqueIdentifier;
@property (nonatomic) BOOL forceModernEncoding;
@property (readonly, nonatomic) NSDictionary *subcredentialCredentialIdentifiers;

+ (BOOL)extractApplicationIdentifier:(id *)a0 subcredentialIdentifier:(id *)a1 fromIdentifiers:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void)enumerateCriteriaWithHandler:(id /* block */)a0;
- (id)criteriaForApplication:(id)a0;
- (id)_initForPaymentPass:(id)a0 configuration:(id)a1;
- (id)subcredentialCredentialIdentifiers;
- (id)criteriaForPaymentApplicationIdentifier:(id)a0;
- (id)initForExpressMode:(id)a0 withPassUniqueIdentifier:(id)a1 paymentApplicationIdentifier:(id)a2;
- (id)expressMode;
- (id)description;
- (void)enumerateCredentialsWithHandler:(id /* block */)a0;
- (id)initForPaymentPass:(id)a0 withTechologyTest:(id /* block */)a1;
- (id)initDummyExpressInfoForAutomaticSelectionCriteriaUpgradeRequest:(id)a0 paymentPass:(id)a1 withTechologyTest:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)paymentApplicationIdentifiers;
- (id)paymentApplicationIdentifier;

@end
