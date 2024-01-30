@interface ICDocCamArchiveExporter : NSObject

@property (class, readonly, nonatomic) BOOL archiveExportingEnabled;

+ (id)exportAsArchiveActivityWithBarButtonItem:(id)a0 presentingVC:(id)a1 fromNote:(id)a2;
+ (id)archivableImageForSubAttachent:(id)a0;
+ (id)archiveGalleryImagesFromGallery:(id)a0 toURL:(id)a1;
+ (id)createZipArchiveOfImagesFromGalleryAttachment:(id)a0;
+ (id)createZipArchiveOfImagesFromNote:(id)a0;
+ (id)exportAsArchiveActivityWithBarButtonItem:(id)a0 presentingVC:(id)a1 fromGalleryAttachment:(id)a2;
+ (void)showActivityVCWithBarButtonItem:(id)a0 presentingVC:(id)a1 url:(id)a2;
+ (void)showExportArchiveFromNote:(id)a0 presentingViewController:(id)a1 presentingBarButtonItem:(id)a2;

@end
