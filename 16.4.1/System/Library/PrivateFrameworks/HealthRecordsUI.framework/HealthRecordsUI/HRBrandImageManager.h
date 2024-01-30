@class NSCache, NSMutableDictionary, NSOperationQueue, HKClinicalProviderServiceStore, HKHealthRecordsStore;

@interface HRBrandImageManager : NSObject

@property (class, readonly) double defaultLogoDimension;

@property (retain) NSOperationQueue *fileOperationQueue;
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (retain, nonatomic) HKClinicalProviderServiceStore *providerServiceStore;
@property (retain, nonatomic) NSCache *fetchedImages;
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests;

+ (id)_fetchOrCreateSalt;
+ (id)imageManagerWithHealthRecordsStore:(id)a0;

- (void).cxx_destruct;
- (id)_hashedSaltedStringFromString:(id)a0;
- (id)_logoURLForBrand:(id)a0;
- (id)_scaleKeyForCurrentDevice;
- (void)_writeImageData:(id)a0 brand:(id)a1;
- (void)cacheFeaturedBrandLogosWithCompletion:(id /* block */)a0;
- (void)dispatchResponsesForBrand:(id)a0 image:(id)a1 error:(id)a2;
- (void)fetchLogoForBrand:(id)a0 completion:(id /* block */)a1;
- (id)initWithHealthRecordsStore:(id)a0;
- (id)loadStoredLogoForBrand:(id)a0;
- (void)onMainQueue:(id /* block */)a0;
- (void)processFetchResponseWithData:(id)a0 error:(id)a1 brand:(id)a2;
- (void)retrieveLogoForBrand:(id)a0 size:(double)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;

@end
