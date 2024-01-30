@class NSMutableArray, NSString, NSTimer, CLLocationManager, PKSecureElement, NSObject, PKPaymentDeviceConfigurationData;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    NSTimer *_timer;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    PKSecureElement *_secureElement;
    PKPaymentDeviceConfigurationData *_configurationData;
    NSMutableArray *_metdataFetchTasks;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (nonatomic) BOOL skipLocationCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInfoHTTPHeader;
+ (id)clientHardwarePlatformInfoHTTPHeader;

- (void)queueConnectionToTrustedServiceManagerForPushTopic:(id)a0 withCompletion:(id /* block */)a1;
- (void)SEPParingInformationWithCompletion:(id /* block */)a0;
- (void)signData:(id)a0 signatureEntanglementMode:(unsigned long long)a1 withCompletionHandler:(id /* block */)a2;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (id)configurationData;
- (void)dealloc;
- (void)paymentDeviceMetadataFields:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_finishLocationFixWithLocation:(id)a0;
- (void)setRegistrationRegionMap:(id)a0 primaryRegionTopic:(id)a1;
- (void)_executeDeviceMetadataFetchTasksCompletionHandlers;
- (void)provisioningDataIncludingDeviceMetadata:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (void)_populateDeviceMetadata:(id)a0 withFields:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)trustedDeviceEnrollmentInfo;
- (void)signatureForAuthToken:(id)a0 completion:(id /* block */)a1;
- (void)queueConnectionToTrustedServiceManagerWithCompletion:(id /* block */)a0;
- (void)rewrapDataWithCompletionHandler:(id /* block */)a0;
- (void)configurationDataWithCompletionHandler:(id /* block */)a0;
- (void)deleteApplicationWithAID:(id)a0;
- (void)registrationDataWithAuthToken:(id)a0 completionHandler:(id /* block */)a1;
- (id)primarySecureElementIdentifier;
- (BOOL)hasRegistrationRegionMap;
- (id)initWithCallbackQueue:(id)a0;

@end
