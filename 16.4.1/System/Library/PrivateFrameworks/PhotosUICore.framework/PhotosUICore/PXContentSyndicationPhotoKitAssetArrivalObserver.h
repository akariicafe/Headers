@class NSSet, PHFetchResult, NSString, PHPhotoLibrary, NSDate;

@interface PXContentSyndicationPhotoKitAssetArrivalObserver : NSObject <PHPhotoLibraryChangeObserver>

@property (readonly, nonatomic) NSSet *expectedUUIDs;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (retain, nonatomic) NSDate *waitStartTimestamp;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChange:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithExpectedAssetUUIDs:(id)a0 inPhotoLibrary:(id)a1;
- (void)updateWithFetchResult:(id)a0;
- (void)waitForAssetArrivalsWithCompletion:(id /* block */)a0;

@end
