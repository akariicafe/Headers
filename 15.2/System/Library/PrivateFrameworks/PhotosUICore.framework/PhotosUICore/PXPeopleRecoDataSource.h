@class PHFetchResult, NSMutableIndexSet, NSString, NSObject, PHPerson;
@protocol OS_dispatch_queue, PXPeopleRecoDataSourceDelegate;

@interface PXPeopleRecoDataSource : NSObject <PXPhotoLibraryUIChangeObserver>

@property (retain, nonatomic) PHPerson *person;
@property (readonly, weak, nonatomic) id<PXPeopleRecoDataSourceDelegate> dataSourceDelegate;
@property (retain, nonatomic) PHFetchResult *faces;
@property (retain, nonatomic) PHFetchResult *faceCrops;
@property (readonly, nonatomic) NSMutableIndexSet *rejectedFaceIndexes;
@property (readonly, nonatomic) NSMutableIndexSet *rejectedFaceCropIndexes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfItems;
- (void)commitChanges;
- (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)initWithPerson:(id)a0 dataSourceDelegate:(id)a1;
- (void)_fetchEverythingForPerson:(id)a0;
- (void)requestImageForItemAtIndex:(unsigned long long)a0 targetSize:(struct CGSize { double x0; double x1; })a1 displayScale:(double)a2 imageBlock:(id /* block */)a3;
- (BOOL)isIndexRejected:(unsigned long long)a0;
- (BOOL)toggleRejectionForIndex:(unsigned long long)a0;
- (BOOL)shouldAllowCommitting;
- (BOOL)hasAnyRejectedItems;
- (void)_clearIndexes;

@end
