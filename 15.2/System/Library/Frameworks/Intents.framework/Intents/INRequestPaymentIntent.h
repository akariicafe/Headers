@class INCurrencyAmount, NSString, INPerson;

@interface INRequestPaymentIntent : INIntent <INRequestPaymentIntentExport>

@property (readonly, copy, nonatomic) INPerson *payer;
@property (readonly, copy, nonatomic) INCurrencyAmount *currencyAmount;
@property (readonly, copy, nonatomic) NSString *note;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (id)initWithPayer:(id)a0 currencyAmount:(id)a1 note:(id)a2;
- (void)setVerb:(id)a0;
- (void)setCurrencyAmount:(id)a0;
- (void)_setMetadata:(id)a0;
- (void)setPayer:(id)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)domain;
- (void)setNote:(id)a0;
- (BOOL)_isUserConfirmationRequired;
- (void)setDomain:(id)a0;

@end
