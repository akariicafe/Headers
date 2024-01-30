@class INCurrencyAmount, NSString, INPerson;

@interface INSendPaymentIntent : INIntent <INSendPaymentIntentExport>

@property (readonly, copy, nonatomic) INPerson *payee;
@property (readonly, copy, nonatomic) INCurrencyAmount *currencyAmount;
@property (readonly, copy, nonatomic) NSString *note;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (void)setPayee:(id)a0;
- (void)setNote:(id)a0;
- (id)domain;
- (BOOL)configureAttributeSet:(id)a0 includingData:(BOOL)a1;
- (void)setVerb:(id)a0;
- (void)setCurrencyAmount:(id)a0;
- (id)initWithPayee:(id)a0 currencyAmount:(id)a1 note:(id)a2;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (BOOL)_isUserConfirmationRequired;
- (id)_dictionaryRepresentation;

@end
