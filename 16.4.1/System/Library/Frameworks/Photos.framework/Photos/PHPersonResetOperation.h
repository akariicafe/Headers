@class PHPhotoLibrary, PHFetchResult;

@interface PHPersonResetOperation : NSOperation {
    PHPhotoLibrary *_library;
    BOOL _shouldResetPhotoAnalysis;
    unsigned long long _batchSize;
    PHFetchResult *_personsToDelete;
    unsigned long long _totalPersonsToDelete;
    unsigned long long _deletedPersons;
    PHFetchResult *_facesToDelete;
    unsigned long long _totalFacesToDelete;
    unsigned long long _deletedFaces;
    BOOL _shouldDeleteAllFaceCrops;
    PHFetchResult *_faceCropsToDelete;
    unsigned long long _totalFaceCropsToDelete;
    unsigned long long _deletedFaceCrops;
    id /* block */ _completionHandler;
    id /* block */ _progressHandler;
}

+ (id)resetAllPersonsOperationWithBatchSize:(unsigned long long)a0 shouldResetPhotoAnalysis:(BOOL)a1 photoLibrary:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (id)resetOperationsForPersons:(id)a0 batchSize:(unsigned long long)a1 photoLibrary:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)_enumerateFetchResult:(id)a0 withBatchSize:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)_prepareToDeleteFaceCrops;
- (id)initWithPersonsToDelete:(id)a0 facesToDelete:(id)a1 shouldDeleteAllFaceCrops:(BOOL)a2 shouldResetPhotoAnalysis:(BOOL)a3 batchSize:(unsigned long long)a4 photoLibrary:(id)a5 progressHandler:(id /* block */)a6 completionHandler:(id /* block */)a7;

@end
