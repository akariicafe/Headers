@class NSCache, NSMutableDictionary, NSOperationQueue, HKHealthRecordsStore;

@interface HKBrandImageManager : NSObject

@property (class, readonly) double defaultLogoDimension;

@property (retain) NSOperationQueue *fileOperationQueue;
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (retain, nonatomic) NSCache *fetchedImages;
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests;

+ (id)imageManagerWithHealthRecordsStore:(id)a0;
+ (id)_fetchOrCreateSalt;

- (void)cacheFeaturedBrandLogosWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)retrieveLogoForBrand:(id)a0 size:(double)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)initWithHealthRecordsStore:(id)a0;
- (id)_scaleKeyForCurrentDevice;
- (void)processFetchResponseWithData:(id)a0 error:(id)a1 brand:(id)a2;
- (id)loadStoredLogoForBrand:(id)a0;
- (void)onMainQueue:(id /* block */)a0;
- (void)fetchLogoForBrand:(id)a0 completion:(id /* block */)a1;
- (id)_logoURLForBrand:(id)a0;
- (void)dispatchResponsesForBrand:(id)a0 image:(id)a1 error:(id)a2;
- (void)_writeImageData:(id)a0 brand:(id)a1;
- (id)_hashedSaltedStringFromString:(id)a0;

@end
