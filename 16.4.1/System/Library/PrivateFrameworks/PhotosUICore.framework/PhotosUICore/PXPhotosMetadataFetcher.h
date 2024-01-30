@class NSString, NSMutableDictionary, PHPhotoLibrary, NSObject;
@protocol OS_dispatch_queue;

@interface PXPhotosMetadataFetcher : NSObject <PXPhotoLibraryUIInternalChangeObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_fetchResultByFetchedFact;
    NSMutableDictionary *_queue_OIDsByDerivedFacts;
}

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFetcherForPhotoLibrary:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_queue_oidsForFacts:(unsigned long long)a0 allowFetch:(BOOL)a1;
- (id)_predicateForFact:(unsigned long long)a0;
- (id)_queue_fetchResultForFact:(unsigned long long)a0 allowFetch:(BOOL)a1;
- (BOOL)getAssetCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a0 guestAssetCounts:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a1 forFetchResult:(id)a2 allowFetch:(BOOL)a3;
- (void)photoLibraryWillChange:(id)a0;

@end
