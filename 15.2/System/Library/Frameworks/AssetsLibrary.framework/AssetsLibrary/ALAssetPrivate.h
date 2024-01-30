@class PLPhotoLibrary, NSString, ALAssetsLibrary, PLManagedAsset;

@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset> {
    ALAssetsLibrary *_library;
}

@property (retain, nonatomic) PLManagedAsset *photo;
@property (retain, nonatomic) PLPhotoLibrary *_photoLibrary;
@property (nonatomic) ALAssetsLibrary *library;
@property (nonatomic) BOOL isValid;
@property (readonly, nonatomic, getter=isDeletable) BOOL deletable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performBlockAndWait:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithManagedAsset:(id)a0 library:(id)a1;
- (void)libraryDidChange;

@end
