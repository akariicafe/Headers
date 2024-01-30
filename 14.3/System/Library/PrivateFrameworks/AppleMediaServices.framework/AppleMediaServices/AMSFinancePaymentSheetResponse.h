@class AMSPaymentSheetRequest, NSDictionary, NSString, AMSFinanceAuthenticateResponse;

@interface AMSFinancePaymentSheetResponse : NSObject <AMSFinancePerformable>

@property (readonly, nonatomic) AMSFinanceAuthenticateResponse *authenticateResponse;
@property (readonly, nonatomic) NSDictionary *metricsDictionary;
@property (readonly, nonatomic) AMSPaymentSheetRequest *paymentSheetRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createRequestFromDictionary:(id)a0 confirmationOnly:(BOOL)a1 authenticateResponse:(id)a2 taskInfo:(id)a3;
+ (id)_createMerchantSessionFromDictionary:(id)a0;
+ (long long)_payeeForRequestorValue:(id)a0;
+ (long long)_salableIconForString:(id)a0;
+ (long long)_payeeInferredFromEnumeratedTitle:(id)a0;
+ (long long)_confirmationTitleForString:(id)a0;
+ (id)_flexListDictionaryForValues:(id)a0 account:(id)a1 shouldUppercaseText:(BOOL)a2;
+ (id)_attributedStringForSalableInfoStringArray:(id)a0 account:(id)a1 shouldUppercase:(BOOL)a2;
+ (id)_attributedListDictionaryForValues:(id)a0 account:(id)a1;
+ (id)_attributedStringForAttributedDictionary:(id)a0 account:(id)a1;
+ (id)_attributedStringForAttributedArray:(id)a0 account:(id)a1;
+ (id)_attributedStringForStringArray:(id)a0 useGrey:(BOOL)a1 account:(id)a2 shouldUppercase:(BOOL)a3;
+ (id)_greyAttributedStringForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
