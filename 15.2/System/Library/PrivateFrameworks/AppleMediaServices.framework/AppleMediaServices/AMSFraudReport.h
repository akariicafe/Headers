@class AMSBagKeySet, NSString;

@interface AMSFraudReport : NSObject <AMSBagConsumer_Project, AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_isCallbackFraudReportStatusCode:(long long)a0;
+ (BOOL)_isFraudReportStatusCode:(long long)a0;
+ (BOOL)isFeatureSupported;
+ (id)addDeviceIdentityCertificateAndSignatureToRequest:(id)a0 parameters:(id)a1 bag:(id)a2;
+ (BOOL)_containsCallbackFraudReportHeaders:(id)a0;
+ (id)createBagForSubProfile;
+ (BOOL)_containsFraudReportHeaders:(id)a0;
+ (id)handleResponse:(id)a0 bag:(id)a1;
+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)_signatureForRequest:(id)a0 signingKeyRef:(struct __SecKey { } *)a1;
+ (id)_handleCallbackFraudReportResponse:(id)a0 bag:(id)a1;
+ (id)_handleFraudReportResponse:(id)a0 bag:(id)a1;
+ (void)_performCallbackWithURL:(id)a0 headers:(id)a1 bag:(id)a2;


@end
