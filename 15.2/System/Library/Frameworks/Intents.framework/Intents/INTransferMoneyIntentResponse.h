@class INPaymentAccount, NSString, INPaymentAmount, INCurrencyAmount, INDateComponentsRange;

@interface INTransferMoneyIntentResponse : INIntentResponse <INTransferMoneyIntentResponseExport>

@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) INPaymentAccount *fromAccount;
@property (copy, nonatomic) INPaymentAccount *toAccount;
@property (copy, nonatomic) INPaymentAmount *transactionAmount;
@property (copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
@property (copy, nonatomic) NSString *transactionNote;
@property (copy, nonatomic) INCurrencyAmount *transferFee;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (int)_typeFromCode:(long long)a0;
+ (long long)_codeFromType:(int)a0 errorCode:(int)a1 appLaunchRequested:(BOOL)a2;
+ (int)_errorCodeFromCode:(long long)a0;
+ (BOOL)_appLaunchRequestedFromCode:(long long)a0;

- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (long long)_codeWithName:(id)a0;
- (id)initWithBackingStore:(id)a0;
- (id)propertiesByName;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)_initWithCode:(long long)a0 userActivity:(id)a1;
- (long long)_intentResponseCode;
- (void)setPropertiesByName:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
