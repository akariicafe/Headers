@class NSString;

@interface CKImportStatusManager : NSObject <PXAssetImportStatusManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAssetImportStatusObserver:(id)a0;
- (long long)importStateForAsset:(id)a0;
- (void)removeAssetImportStatusObserver:(id)a0;

@end
