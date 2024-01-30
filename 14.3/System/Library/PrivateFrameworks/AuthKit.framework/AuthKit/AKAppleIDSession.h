@class NSString, AKDevice, AKAnisetteProvisioningController, AKAnisetteData, NSLock;
@protocol AKAnisetteServiceProtocol;

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext> {
    NSString *_serviceID;
    AKAnisetteProvisioningController *_nativeAnisetteController;
    AKAnisetteProvisioningController *_pairedDeviceAnisetteController;
    AKAnisetteData *_proxiedAnisetteData;
    NSLock *_anisetteControllerLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<AKAnisetteServiceProtocol> anisetteDataProvider;
@property (retain, nonatomic) AKDevice *pairedDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 getAppleIDRequestOrHeadersForResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)_nativeAnisetteController;
- (id)init;
- (void).cxx_destruct;
- (id)_genericAppleIDHeadersDictionaryForRequest:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_generateAppleIDHeadersForRequest:(id)a0 error:(id *)a1;
- (void)handleResponse:(id)a0 forRequest:(id)a1 shouldRetry:(BOOL *)a2;
- (id)appleIDHeadersForRequest:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)relevantHTTPStatusCodes;
- (void)_handleURLSwitchingResponse:(id)a0 forRequest:(id)a1 withCompletion:(id /* block */)a2;
- (id)_pairedDeviceAnisetteController;
- (void)URLSession:(id)a0 task:(id)a1 getAppleIDHeadersForResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_generateAppleIDHeadersForSessionTask:(id)a0 withCompletion:(id /* block */)a1;
- (void)_handleAnissetteURLResponse:(id)a0 forRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;

@end
