@class NSString, NSDictionary, UIImagePickerController, UINavigationItem;

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    NSDictionary *_options;
    UIImagePickerController *_imagePicker;
    UINavigationItem *_navItem;
    id _delegate;
    Class _viewClass;
    unsigned int _canCreateMetadata;
}

@property (nonatomic) BOOL parentInPopoverException;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProperties:(id)a0;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewFrame;
- (void)loadView;
- (void)setDelegate:(id)a0;
- (id)navigationItem;
- (id)delegate;
- (BOOL)_displaysFullScreen;
- (void)dealloc;
- (void)videoRemakerDidEndRemaking:(id)a0 temporaryPath:(id)a1;
- (void)setImagePickerOptions:(id)a0;
- (id)initWithPhoto:(id)a0 trimTitle:(id)a1;
- (int)cropOverlayMode;
- (Class)_viewClass;
- (id)initWithVideoURL:(id)a0 trimTitle:(id)a1;
- (double)videoViewScrubberYOrigin:(id)a0 forOrientation:(long long)a1;
- (void)videoViewPlaybackDidFail:(id)a0;
- (BOOL)videoViewCanCreateMetadata:(id)a0;
- (id)uiipc_imagePickerController;
- (id)uiipc_imagePickerOptions;
- (BOOL)_editingForThirdParty;
- (void)_setupNavigationItemAndTrimTitle:(id)a0;
- (id)_trimMessage;
- (void)setViewClass:(Class)a0;
- (void)didChooseVideoAtURL:(id)a0 options:(id)a1;
- (void)_cancelTrim:(id)a0;
- (void)_trimVideo:(id)a0;

@end
