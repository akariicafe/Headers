@class NSString, AMSBagKeySet;

@interface AMSFraudReport : NSObject <AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_performCallbackWithURL:(id)a0 headers:(id)a1 bag:(id)a2;
+ (id)_signatureForRequest:(id)a0 signingKeyRef:(struct __SecKey { } *)a1;
+ (id)_determineFallbackAccountForProvidedAccount:(id)a0;
+ (BOOL)_containsFraudReportHeaders:(id)a0;
+ (id)createBagForSubProfile;
+ (BOOL)isFeatureSupportedForBag:(id)a0;
+ (id)_handleFraudReportResponse:(id)a0 account:(id)a1 bag:(id)a2;
+ (BOOL)_isFraudReportStatusCode:(long long)a0;
+ (BOOL)_isCallbackFraudReportStatusCode:(long long)a0;
+ (id)handleResponse:(id)a0 account:(id)a1 bag:(id)a2;
+ (id)addDeviceIdentityCertificateAndSignatureToRequest:(id)a0 parameters:(id)a1 bag:(id)a2;
+ (BOOL)_containsCallbackFraudReportHeaders:(id)a0;
+ (id)_handleCallbackFraudReportResponse:(id)a0 account:(id)a1 bag:(id)a2;


@end
