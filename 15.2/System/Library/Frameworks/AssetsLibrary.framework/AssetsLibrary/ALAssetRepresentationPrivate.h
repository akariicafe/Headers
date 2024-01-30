@class PLPhotoLibrary, NSString, PLManagedAsset, ALAssetsLibrary;
@protocol PLSidecar;

@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset> {
    ALAssetsLibrary *_library;
}

@property (retain, nonatomic) PLManagedAsset *photo;
@property (retain, nonatomic) PLPhotoLibrary *_photoLibrary;
@property (retain, nonatomic) id<PLSidecar> sidecar;
@property (copy, nonatomic) NSString *extension;
@property (nonatomic) ALAssetsLibrary *library;
@property (nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setupFileDescriptorQueue;
+ (int)_fileDescriptorForPersistentURL:(id)a0;
+ (int)_updateFileDescriptor:(int)a0 forPersistentURL:(id)a1;
+ (void)_clearFileDescriptorQueue;

- (BOOL)_isImage;
- (void)_performBlockAndWait:(id /* block */)a0;
- (BOOL)_isVideo;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithManagedAsset:(id)a0 sidecar:(id)a1 extension:(id)a2 library:(id)a3;
- (void)libraryDidChange;

@end
