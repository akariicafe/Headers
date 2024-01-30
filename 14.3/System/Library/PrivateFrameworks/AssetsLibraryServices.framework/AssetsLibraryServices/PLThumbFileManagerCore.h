@class PLImageFormat, NSString, PLPhotoLibraryPathManager;

@interface PLThumbFileManagerCore : NSObject <PLThumbPersistenceManager> {
    BOOL _readOnly;
    PLPhotoLibraryPathManager *_pathManager;
    NSString *_filename;
}

@property (readonly) PLImageFormat *format;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { int x0; int x1; })maxMasterSizeFromSourceImageSize:(struct { int x0; int x1; })a0 format:(id)a1;

- (void).cxx_destruct;
- (id)_debugDescription;
- (struct CGImage { } *)createImageWithIdentifier:(id)a0 orIndex:(unsigned long long)a1;
- (BOOL)setImageForEntry:(id)a0 withIdentifier:(id)a1 orIndex:(unsigned long long)a2 photoUUID:(id)a3 options:(id)a4;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0 withToken:(id)a1;
- (void)preheatDataForThumbnailIndexes:(id)a0;
- (id)initWithImageFormat:(id)a0 pathManager:(id)a1;
- (BOOL)validateData:(id)a0 withToken:(id)a1;
- (id)imageDataWithIdentifier:(id)a0 orIndex:(unsigned long long)a1 width:(int *)a2 height:(int *)a3 bytesPerRow:(int *)a4 dataWidth:(int *)a5 dataHeight:(int *)a6 dataOffset:(int *)a7;
- (id)thumbnailPathForThumbIdentifier:(id)a0;
- (void)deleteEntryWithIdentifier:(id)a0;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)a0;
- (BOOL)usesThumbIdentifiers;

@end
