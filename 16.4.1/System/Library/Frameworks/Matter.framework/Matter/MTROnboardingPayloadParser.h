@interface MTROnboardingPayloadParser : NSObject

+ (BOOL)isQRCode:(id)a0;
+ (id)setupPayloadForManualCodeOnboardingPayload:(id)a0 error:(id *)a1;
+ (id)setupPayloadForOnboardingPayload:(id)a0 error:(id *)a1;
+ (id)setupPayloadForQRCodeOnboardingPayload:(id)a0 error:(id *)a1;

@end
