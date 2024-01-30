@class NSMapTable, NSProgress, NSString, WFContentAttributionSet, NSObject;
@protocol OS_dispatch_queue;

@interface WFiCloudStorageService : NSObject <UIDocumentPickerDelegate, UIAdaptivePresentationControllerDelegate, WFFileStorageService>

@property (readonly, nonatomic) NSMapTable *documentPickerCompletionTable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *documentPickerDownloadQueue;
@property (weak, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) Class objectRepresentationClass;
@property (readonly, nonatomic) Class accessResourceClass;
@property (readonly, nonatomic) NSString *storageLocationPrefix;
@property (readonly, nonatomic) BOOL hasPublicURLs;
@property (readonly, nonatomic) BOOL supportsJumpingToSubdirectoryInUI;
@property (readonly, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, nonatomic) WFContentAttributionSet *contentAttributionSet;

+ (id)containerIdentifier;
+ (id)serviceName;
+ (id)containerName;
+ (Class)resultItemClass;
+ (void)createDocumentsDirectoryIfNecessary;
+ (id)documentsDirectoryWithError:(id *)a0;

- (void).cxx_destruct;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)retrieveFilesWithUserInterface:(id)a0 initialDirectoryPath:(id)a1 consumingBundleID:(id)a2 options:(unsigned long long)a3 progress:(id)a4 completionHandler:(id /* block */)a5;
- (id)saveFiles:(id)a0 withManagedLevel:(unsigned long long)a1 userInterface:(id)a2 consumingBundleID:(id)a3 options:(unsigned long long)a4 progress:(id)a5 completionHandler:(id /* block */)a6;
- (void)retrieveFilesAtPath:(id)a0 options:(unsigned long long)a1 progress:(id)a2 completionHandler:(id /* block */)a3;
- (id)saveFiles:(id)a0 withManagedLevel:(unsigned long long)a1 toPath:(id)a2 options:(unsigned long long)a3 progress:(id)a4 completionHandler:(id /* block */)a5;
- (void)getSharingURLsForFiles:(id)a0 usePublicURLs:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)deleteFiles:(id)a0 completionHandler:(id /* block */)a1;
- (void)createFolderAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)appendText:(id)a0 toPath:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)searchFiles:(id)a0 inPath:(id)a1 completionHandler:(id /* block */)a2;
- (id)saveFiles:(id)a0 toPath:(id)a1 options:(unsigned long long)a2 progress:(id)a3 completionHandler:(id /* block */)a4;
- (void)retrieveFilesForAppendingAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (id /* block */)completionHandlerForDocumentPicker:(id)a0;
- (void)setCompletionHandler:(id /* block */)a0 forDocumentPicker:(id)a1;
- (void)presentDocumentPicker:(id)a0 withUserInterface:(id)a1 completionHandler:(id /* block */)a2;
- (void)completeOperationForDocumentPicker:(id)a0 withFileURLs:(id)a1 error:(id)a2;
- (id)supportedPickerContentTypes;

@end
