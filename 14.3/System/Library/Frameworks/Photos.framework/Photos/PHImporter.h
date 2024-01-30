@class NSMutableDictionary, NSString, NSMutableArray, PHImportResults, PHPhotoLibrary, PHImportSource, NSMutableSet, NSProgress, PHImportOptions, NSObject, PLImportFileManager;
@protocol OS_dispatch_queue, PHImportServiceImporterDelegate;

@interface PHImporter : NSObject {
    id<PHImportServiceImporterDelegate> _delegate;
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_importQueue;
    unsigned char _importState;
    PLImportFileManager *_importFileManager;
    NSMutableDictionary *_downloadFolderUrlByImportIdentifier;
    NSMutableArray *_additionalDcimImportFolders;
    NSMutableDictionary *_parentFolderMapping;
    NSMutableArray *_downloadedRecords;
    BOOL _isCanceled;
    NSMutableDictionary *_folderByFolderPath;
    NSMutableDictionary *_containerPathByLocalIdentifier;
    NSMutableDictionary *_albumByAlbumPath;
    NSMutableDictionary *_albumRequestsByAlbumId;
    NSMutableDictionary *_folderRequestByFolderId;
    unsigned long long _importBatchSize;
}

@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) PHImportOptions *options;
@property (retain, nonatomic) PHImportResults *results;
@property (retain, nonatomic) PHPhotoLibrary *library;
@property (retain, nonatomic) NSString *importSessionID;
@property (retain, nonatomic) NSMutableSet *importedBurstUUIDs;
@property (retain, nonatomic) PHImportSource *source;

+ (void)dumpImageData:(id)a0;
+ (void)importAssets:(id)a0 fromImportSource:(id)a1 intoLibrary:(id)a2 withOptions:(id)a3 progress:(id *)a4 delegate:(id)a5 atEnd:(id /* block */)a6;
+ (void)dumpMetadataForData:(id)a0;

- (void).cxx_destruct;
- (void)cancellationHandler;
- (id)beginImport:(id)a0;
- (id)initWithLibrary:(id)a0 options:(id)a1 source:(id)a2 delegate:(id)a3 completionHandler:(id /* block */)a4;
- (id)makeDownloadUrlForParentFolderPath:(id)a0;
- (id)getDestinationUrlForImportAsset:(id)a0;
- (void)importNextAsset:(id)a0;
- (BOOL)shouldImportRecordAsReference:(id)a0;
- (void)importRecords:(id)a0;
- (void)downloadNextAssetInRecord:(id)a0 toURL:(id)a1 subRecordEnumerator:(id)a2 completionHandler:(id /* block */)a3;
- (id)_recordsToImportWithCount:(unsigned long long)a0;
- (BOOL)shouldIngestInPlace:(id)a0;
- (void)importRecords:(id)a0 completionHandler:(id /* block */)a1;
- (void)_applyFastVideoModernizationToRecord:(id)a0;
- (void)_importRecord:(id)a0 createdAlbumIdentifiers:(id)a1 createdFolderIdentifiers:(id)a2;
- (void)addDescriptionPropertiesFromImportAsset:(id)a0 toCreationRequest:(id)a1;
- (void)addLibraryPropertiesFromImportAssetBundleAsset:(id)a0 toCreationRequest:(id)a1;
- (void)finishImport;
- (BOOL)handleErrorsForRecord:(id)a0 batch:(id)a1 file:(char *)a2 line:(int)a3;
- (void)validateSourceForAsset:(id)a0;
- (id)createFolderForPath:(id)a0 inFolder:(id)a1 error:(id *)a2;
- (id)folderChangeRequestForFolder:(id)a0;
- (void)updateAlbumCacheWithAlbumIdentifiers:(id)a0;
- (void)updateFolderCacheWithFolders:(id)a0;
- (void)addRecordToResults:(id)a0;
- (id)relativePathComponentsForAlbumPath:(id)a0 fromRootPath:(id)a1;
- (void)ensureContainersExistForAlbumPath:(id)a0 forAsset:(id)a1 completion:(id /* block */)a2;
- (id)createAlbumForPath:(id)a0 inFolder:(id)a1 error:(id *)a2;
- (void)importedBurstAsset:(id)a0;
- (id)removeImportDirectoryForLibrary:(id)a0;

@end
