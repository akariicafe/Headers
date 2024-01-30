@class NSFileManager, NSObject;
@protocol OS_dispatch_queue;

@interface DCDocCamPDFGenerator : NSObject

@property (class, readonly) NSObject<OS_dispatch_queue> *syncGeneratorQueue;
@property (class, readonly) NSObject<OS_dispatch_queue> *fileQueue;
@property (class, readonly) NSFileManager *fileManager;

+ (void)initialize;
+ (void)applicationWillTerminate:(id)a0;
+ (void)deleteAllDocCamPDFs;
+ (id)rootPDFFolderPath;
+ (id)blockingGeneratepdfURLForDocumentInfoCollection:(id)a0 imageCache:(id)a1 withProgress:(id)a2 error:(id *)a3;
+ (void)createEmptyPDFFileAtURLIFNecessaryForDocumentInfoCollection:(id)a0;
+ (void)createTmpDirectory:(id)a0;
+ (void)deletePDFFolderIfExistsForDocumentInfoCollection:(id)a0;
+ (void)deletePDFForDocumentInfoCollectionIfExists:(id)a0;
+ (id)folderPathForDocumentInfoCollection:(id)a0;
+ (id)folderPathForDocumentInfoCollectionIdentifier:(id)a0;
+ (void)generatePDFsIfNecessaryForDocumentInfoCollection:(id)a0 imageCache:(id)a1 displayWindow:(id)a2 presentingViewController:(id)a3 completionHandler:(id /* block */)a4;
+ (id)pdfURLForDocumentInfoCollection:(id)a0;
+ (void)performPDFGenerationWithGenerator:(id)a0 docInfoCollection:(id)a1 imageCache:(id)a2 progress:(id)a3;
+ (id)versionPDFPathForDocumentInfoCollection:(id)a0;
+ (id)versionfolderPathForDocumentInfoCollection:(id)a0;

@end
