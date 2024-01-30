@class PHImportTimerCollection, NSString, NSMutableArray, PHImportAsset;

@interface PHImportRecord : PHImportExceptionRecorder {
    NSString *_rawAssetIdentifier;
}

@property (retain, nonatomic) NSMutableArray *relatedRecords;
@property (nonatomic) BOOL referencedImport;
@property (retain, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) NSString *rawAssetIdentifier;
@property (retain, nonatomic) PHImportAsset *importAsset;
@property (retain, nonatomic) NSString *downloadedPath;
@property (retain, nonatomic) PHImportTimerCollection *timers;
@property (nonatomic) unsigned char importType;
@property (readonly) BOOL canReference;

- (id)description;
- (void).cxx_destruct;
- (id)initWithImportAsset:(id)a0;
- (id)descriptionWithPrefix:(id)a0;
- (void)cleanupAfterFailure;
- (id)recordForAsset:(id)a0;
- (id)allAssetIdentifiers;
- (void)addRelatedRecord:(id)a0;
- (id)allImportAssets;
- (id)allImportRecords;
- (BOOL)needsDownload;

@end
