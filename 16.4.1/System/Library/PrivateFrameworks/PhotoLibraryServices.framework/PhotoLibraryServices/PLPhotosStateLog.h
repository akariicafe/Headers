@class PLPhotoLibrary, NSObject;
@protocol OS_dispatch_group;

@interface PLPhotosStateLog : NSObject {
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *group;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)logDescription:(id)a0;
- (void)_logAssets:(id)a0 forAlbum:(id)a1 indent:(unsigned long long)a2;
- (BOOL)compressFileFromPath:(id)a0 toPath:(id)a1;
- (BOOL)copyFilesMatching:(id)a0 andExcluding:(id)a1 fromPath:(id)a2 toPath:(id)a3 usingCompression:(BOOL)a4;
- (void)createSnapshot;
- (void)logAlbum:(id)a0 index:(unsigned long long)a1 indent:(unsigned long long)a2 completeMetadata:(BOOL)a3 printAssets:(BOOL)a4;
- (void)logAlbumLists;
- (void)logAllAlbums;
- (void)logAssetCounts;
- (void)logMoments;

@end
