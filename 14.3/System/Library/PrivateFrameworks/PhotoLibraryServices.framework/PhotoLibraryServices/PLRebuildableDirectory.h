@class NSURL, NSFileManager, PLPhotoLibrary;

@interface PLRebuildableDirectory : NSObject

@property (readonly) NSURL *url;
@property (readonly) BOOL isCPLAssets;
@property (readonly) BOOL isPhotoStream;
@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) NSFileManager *fm;
@property (readonly) double startTime;

+ (void)collectFileURLs:(id)a0 urlsToSkip:(id)a1 forAddingToAlbum:(id)a2 intoAssetsArray:(id)a3 assetsKind:(int)a4 testCreationDates:(BOOL)a5 startTime:(double)a6 pathManager:(id)a7;
+ (id)rebuildableDirectoryWithURL:(id)a0 isCPLAssets:(BOOL)a1 isPhotoStream:(BOOL)a2 photoLibrary:(id)a3 startTime:(double)a4;

- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (void)_collectContentsOfDirectoryURL:(id)a0 urlsToSkip:(id)a1 forAddingToAlbum:(id)a2 intoAssetsArray:(id)a3 assetsKind:(int)a4 startTime:(double)a5;
- (void)gatherAssetsToImport:(id)a0 pendingAssetsCount:(unsigned long long *)a1 onDiskURLsToSkip:(id)a2 cameraRollOnly:(BOOL)a3;

@end
