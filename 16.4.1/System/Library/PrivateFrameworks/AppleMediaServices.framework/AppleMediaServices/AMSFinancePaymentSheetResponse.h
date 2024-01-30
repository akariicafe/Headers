@class AMSPaymentSheetRequest, NSDictionary, NSString, AMSFinanceAuthenticateResponse;

@interface AMSFinancePaymentSheetResponse : NSObject <AMSFinancePerformable>

@property (readonly, nonatomic) AMSFinanceAuthenticateResponse *authenticateResponse;
@property (readonly, nonatomic) NSDictionary *metricsDictionary;
@property (readonly, nonatomic) AMSPaymentSheetRequest *paymentSheetRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attributedListDictionaryForValues:(id)a0 account:(id)a1;
+ (id)_attributedStringForAttributedArray:(id)a0 account:(id)a1;
+ (id)_attributedStringForAttributedDictionary:(id)a0 account:(id)a1;
+ (id)_attributedStringForSalableInfoStringArray:(id)a0 account:(id)a1 shouldUppercase:(BOOL)a2;
+ (id)_attributedStringForStringArray:(id)a0 useGrey:(BOOL)a1 account:(id)a2 shouldUppercase:(BOOL)a3;
+ (long long)_confirmationTitleForString:(id)a0;
+ (id)_createMerchantSessionFromDictionary:(id)a0;
+ (id)_flexListDictionaryForValues:(id)a0 styles:(id)a1 account:(id)a2 shouldUppercaseText:(BOOL)a3 designVersion:(id)a4;
+ (id)_greyAttributedStringForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (long long)_payeeInferredFromEnumeratedTitle:(id)a0;
+ (long long)_salableIconForString:(id)a0;
+ (id)_salableInfoForKey:(id)a0 inDictionary:(id)a1 shouldUppercase:(BOOL)a2;
+ (id)_styleDictionaryWithName:(id)a0 styles:(id)a1;
+ (id)attributedStringWithString:(id)a0 styles:(id)a1;
+ (id)createRequestFromDictionary:(id)a0 confirmationOnly:(BOOL)a1 delegateAuthenticationRequired:(BOOL)a2 biometricSignatureRequired:(BOOL)a3 authenticateResponse:(id)a4 taskInfo:(id)a5 account:(id)a6;
+ (id)fallbackTitleFromResponse:(id)a0;

- (void).cxx_destruct;
- (id)_enrichedMetricsDictionaryWithFinanceDictionary:(id)a0;
- (id)_performAuthorizationDialogProxyWithTaskInfo:(id)a0;
- (id)initWithResponseDictionary:(id)a0 confirmationOnly:(BOOL)a1 delegateAuthenticationRequired:(BOOL)a2 biometricSignatureRequired:(BOOL)a3 taskInfo:(id)a4;
- (id)performWithTaskInfo:(id)a0;

@end
