@class NSObject, NSString, AMSURLSession, AMSSigningSecurityService;
@protocol OS_dispatch_queue;

@interface AMSURLProtocolHandler : NSObject <AMSURLHandling>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *responsePingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;
@property (readonly, nonatomic) AMSSigningSecurityService *signingService;
@property (weak, nonatomic) AMSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_randomDouble;
+ (double)reversePushSamplingPercentageForTask:(id)a0;

- (void)reportMetricsForContext:(id)a0;
- (void)reconfigureNewRequest:(id)a0 originalTask:(id)a1 redirect:(BOOL)a2 error:(id *)a3;
- (id)handleCompletionWithTask:(id)a0 metrics:(id)a1 decodedObject:(id)a2;
- (id)decodeData:(id)a0 task:(id)a1 error:(id *)a2;
- (void)didCreateTask:(id)a0 fromRequest:(id)a1 error:(id *)a2;
- (BOOL)_URLIsTrustedFromRequest:(id)a0 bag:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_setResponseCookiesFromResponse:(id)a0 taskInfo:(id)a1;
- (id)handleResponse:(id)a0 task:(id)a1;
- (void)_pingURL:(id)a0 session:(id)a1 bag:(id)a2;
- (BOOL)_shouldEnableReversePushForTask:(id)a0;

@end
