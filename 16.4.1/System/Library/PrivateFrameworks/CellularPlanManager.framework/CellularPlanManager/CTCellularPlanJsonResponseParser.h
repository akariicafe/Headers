@interface CTCellularPlanJsonResponseParser : NSObject

+ (BOOL)parseCountryListResponseData:(id)a0 intoSupportedCountryList:(id *)a1 intoUnsupportedCountryList:(id *)a2 error:(id *)a3;
+ (BOOL)parseCreateSessionResponseData:(id)a0 intoSessionId:(id *)a1 podId:(id *)a2 urls:(id *)a3 error:(id *)a4;
+ (BOOL)parseHandoffTokenResponseData:(id)a0 intoHandoffToken:(id *)a1 error:(id *)a2;
+ (BOOL)parseInitiatePurchaseResponseData:(id)a0 intoShouldPurchase:(BOOL *)a1 responseCode:(int *)a2 responseText:(id *)a3 buddyML:(id *)a4 error:(id *)a5;
+ (BOOL)parsePurchaseResponseData:(id)a0 intoShouldDownloadProfile:(BOOL *)a1 iccid:(id *)a2 responseCode:(int *)a3 responseText:(id *)a4 error:(id *)a5;
+ (BOOL)parseResponseJson:(id)a0 setUrl:(id *)a1 setParameters:(id *)a2;
+ (BOOL)parseSubscriptionsResponseData:(id)a0 intoSubscriptions:(id *)a1 error:(id *)a2;
+ (id)sessionIdFromJsonData:(id)a0;
+ (id)sessionIdFromObject:(id)a0;

@end
