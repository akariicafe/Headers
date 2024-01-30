@class PHFetchResult, NSSet, NSString, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue, HMDPhotoLibraryChangeDelegate;

@interface HMDPhotoLibrary : HMFObject <HMFLogging, PHPhotoLibraryChangeObserver>

@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) PHFetchResult *suggestedPersonsFetchResult;
@property (readonly, copy) NSSet *persons;
@property (weak) id<HMDPhotoLibraryChangeDelegate> photoLibraryChangeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_phPersonWithUUID:(id)a0 fromSuggestedPersonsFetchResult:(id)a1;

- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)releaseCachedResources;
- (id)initWithWorkQueue:(id)a0;
- (void)fetchPersons;
- (id)fetchFaceCropDataByUUIDForPersonUUID:(id)a0;
- (unsigned long long)numberOfFaceCropsForPersonWithUUID:(id)a0;
- (id)faceCropFromFaceCropData:(id)a0;

@end
