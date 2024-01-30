@class INPaymentAccount, INDateComponentsRange, INPaymentAmount, NSString, INBillPayee;

@interface INPayBillIntent : INIntent <INPayBillIntentExport>

@property (readonly, copy, nonatomic) INBillPayee *billPayee;
@property (readonly, copy, nonatomic) INPaymentAccount *fromAccount;
@property (readonly, copy, nonatomic) INPaymentAmount *transactionAmount;
@property (readonly, copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
@property (readonly, copy, nonatomic) NSString *transactionNote;
@property (readonly, nonatomic) long long billType;
@property (readonly, copy, nonatomic) INDateComponentsRange *dueDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)verb;
- (void)_setMetadata:(id)a0;
- (id)initWithBillPayee:(id)a0 fromAccount:(id)a1 transactionAmount:(id)a2 transactionScheduledDate:(id)a3 transactionNote:(id)a4 billType:(long long)a5 dueDate:(id)a6;
- (id)_metadata;
- (void)setDomain:(id)a0;
- (id)domain;
- (void)setVerb:(id)a0;
- (void)setBillPayee:(id)a0;
- (void)setDueDate:(id)a0;
- (void)setBillType:(long long)a0;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setFromAccount:(id)a0;
- (void)setTransactionAmount:(id)a0;
- (void)setTransactionScheduledDate:(id)a0;
- (void)setTransactionNote:(id)a0;
- (BOOL)_isUserConfirmationRequired;
- (id)_dictionaryRepresentation;

@end
