@interface DOCDownloadImportManager : NSObject

- (id)interface;
- (void)importPlaceholderAtURLToDownloadsDirectory:(id)a0 completion:(id /* block */)a1;
- (void)replacePlaceholder:(id)a0 withFinalFileURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)_moveItemAtURLToDownloadsLocation:(id)a0 error:(id *)a1;

@end
