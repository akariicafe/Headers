@class NSString, NSURL, CNContactViewController;

@interface _SFContactPreviewViewController : UINavigationController {
    NSString *_filePath;
    NSURL *_sourceURL;
    CNContactViewController *_contactViewController;
    id /* block */ _beforeDismissHandler;
    BOOL _deleteFileWhenDone;
}

- (void)viewWillDisappear:(BOOL)a0;
- (void)_done:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_presentActivityViewController:(id)a0;
- (id)initWithFilePath:(id)a0 sourceURL:(id)a1 deleteFileWhenDone:(BOOL)a2 beforeDismissHandler:(id /* block */)a3;

@end
