@protocol JTFileURLSource;

@interface JFXMediaURLManager : NSObject

@property (weak, nonatomic) id<JTFileURLSource> urlSource;

+ (id)sharedInstance;
+ (id)videoRecordingFolderURL:(id *)a0;
+ (id)photoExportURL:(id *)a0 isHEIF:(BOOL)a1;
+ (id)videoExportURL:(id *)a0;
+ (id)capturedPhotoURL:(id *)a0 isHEIF:(BOOL)a1;
+ (id)_tempFileURLWithDirectory:(id)a0 file:(id)a1 error:(id *)a2;
+ (BOOL)_createDirectoryAtURL:(id)a0 error:(id *)a1;
+ (id)_videoExportURL:(id *)a0;
+ (id)_capturedPhotoURL:(id *)a0 isHEIF:(BOOL)a1;
+ (id)_photoExportURL:(id *)a0 isHEIF:(BOOL)a1;
+ (id)_temporaryPhotoURL:(id *)a0 fileName:(id)a1;
+ (id)_audioRecordingURL:(id *)a0;
+ (id)cachedExportFileURLWithError:(id *)a0;
+ (void)_cleanupDirectory:(id)a0;
+ (void)jfx_cleanupOldProjects;
+ (id)temporaryPhotoURL:(id *)a0 fileName:(id)a1;
+ (id)audioRecordingURL:(id *)a0;
+ (void)cleanupTemporaryDirectories;
+ (BOOL)ODRAssetsAreEmbedded;

- (void).cxx_destruct;

@end
