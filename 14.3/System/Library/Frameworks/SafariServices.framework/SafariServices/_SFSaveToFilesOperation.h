@class _SFActivityItemProviderCollection, NSString, UIDocumentPickerViewController, _SFDownload;
@protocol _SFSaveToFilesOperationDelegate;

@interface _SFSaveToFilesOperation : NSObject <UIDocumentPickerDelegate, _SFDownloadPlaceholderImporter> {
    _SFActivityItemProviderCollection *_collection;
    NSString *_containerDirectoryPath;
    UIDocumentPickerViewController *_documentPickerViewController;
    id /* block */ _downloadPlaceholderCompletionHandler;
    id /* block */ _prepareDownloadPlaceholderHandler;
    _SFDownload *_download;
}

@property (weak, nonatomic) id<_SFSaveToFilesOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithActivityItemProviderCollection:(id)a0;
- (void)_finishWithURL:(id)a0;
- (void)_copyFileData:(id /* block */)a0;
- (void)start;
- (void)documentPickerWasCancelled:(id)a0;
- (void)_showDocumentPickerForFileURL:(id)a0 sourceURL:(id)a1 willStartDownload:(BOOL)a2;
- (id)_temporaryFileWithName:(id)a0;
- (void)importPlaceholderForDownload:(id)a0 fromURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;

@end
