@class NSString;
@protocol PXDisplayAssetCollection;

@interface PXContentSyndicationCountsController : PXObservable <PXSettingsKeyObserver, PXContentSyndicationMutableCountsController> {
    struct { unsigned long long photosCount; unsigned long long videosCount; unsigned long long othersCount; } _detailedCounts;
    long long _savedCount;
}

@property (nonatomic) long long savedCount;
@property (nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } detailedCounts;
@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } actualDetailedCounts;
@property (readonly, nonatomic) long long actualSavedCount;
@property (copy, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, nonatomic) NSString *totalCountDescription;
@property (readonly, nonatomic) NSString *savedCountDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didSetAssetCollection:(id)a0;

@end
