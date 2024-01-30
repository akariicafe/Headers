@class NSString, NSURL, CNContactViewController;

@interface _SFContactPreviewViewController : UINavigationController {
    NSString *_filePath;
    NSURL *_sourceURL;
    CNContactViewController *_contactViewController;
    id /* block */ _beforeDismissHandler;
    BOOL _deleteFileWhenDone;
}

- (void).cxx_destruct;
- (void)_done:(id)a0;
- (void)dealloc;
- (void)_presentActivityViewController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithFilePath:(id)a0 sourceURL:(id)a1 deleteFileWhenDone:(BOOL)a2 beforeDismissHandler:(id /* block */)a3;

@end
