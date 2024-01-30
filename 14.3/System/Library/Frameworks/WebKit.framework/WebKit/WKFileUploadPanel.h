@class NSString;
@protocol WKFileUploadPanelDelegate;

@interface WKFileUploadPanel : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, UIAdaptivePresentationControllerDelegate, UIContextMenuInteractionDelegate> {
    struct WeakObjCPtr<WKContentView> { id m_weakReference; } _view;
    struct RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::DumbPtrTraits<WebKit::WebOpenPanelResultListenerProxy> > { struct WebOpenPanelResultListenerProxy *m_ptr; } _listener;
    struct RetainPtr<NSArray> { void *m_ptr; } _mimeTypes;
    struct CGPoint { double x; double y; } _interactionPoint;
    BOOL _allowMultipleFiles;
    BOOL _usingCamera;
    struct RetainPtr<UIImagePickerController> { void *m_ptr; } _imagePicker;
    struct RetainPtr<UIViewController> { void *m_ptr; } _presentationViewController;
    struct RetainPtr<UIPopoverController> { void *m_ptr; } _presentationPopover;
    BOOL _isPresentingSubMenu;
    struct RetainPtr<UIContextMenuInteraction> { void *m_ptr; } _documentContextMenuInteraction;
    struct RetainPtr<UIDocumentPickerViewController> { void *m_ptr; } _documentPickerController;
    int _mediaCaptureType;
}

@property (nonatomic) id<WKFileUploadPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_processMediaInfoDictionaries:(id)a0 atIndex:(unsigned long long)a1 processedResults:(id)a2 processedImageCount:(unsigned long long)a3 processedVideoCount:(unsigned long long)a4 successBlock:(id /* block */)a5 failureBlock:(id /* block */)a6;
- (id)initWithView:(id)a0;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)imagePickerController:(id)a0 didFinishPickingMultipleMediaWithInfo:(id)a1;
- (void).cxx_destruct;
- (void)_uploadItemForImageData:(id)a0 imageName:(id)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)dealloc;
- (void)removeContextMenuInteraction;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)_dispatchDidDismiss;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (id)_mediaTypesForPickerSourceType:(long long)a0;
- (void)_presentPopoverWithContentViewController:(id)a0 animated:(BOOL)a1;
- (void)_presentFullscreenViewController:(id)a0 animated:(BOOL)a1;
- (void)_showPhotoPickerWithSourceType:(long long)a0;
- (void)_dismissDisplayAnimated:(BOOL)a0;
- (BOOL)_shouldMediaCaptureOpenMediaDevice;
- (void)_adjustMediaCaptureType;
- (void)_uploadItemFromMediaInfo:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (BOOL)_willMultipleSelectionDelegateBeCalled;
- (void)_processMediaInfoDictionaries:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (id)currentAvailableActionTitles;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)ensureContextMenuInteraction;
- (void)presentationControllerDidDismiss:(id)a0;
- (id).cxx_construct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)showFilePickerMenu;
- (BOOL)platformSupportsPickerViewController;
- (void)showDocumentPickerMenu;
- (void)_configureImagePicker:(id)a0;
- (id)_browseFilesButtonLabel;
- (void)_chooseFiles:(id)a0 displayString:(id)a1 iconImage:(id)a2;
- (void)presentWithParameters:(struct OpenPanelParameters { void /* function */ **x0; id x1; struct FileChooserSettings { BOOL x0; BOOL x1; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; } x2; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; } x3; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct String *x0; unsigned int x1; unsigned int x2; } x4; int x5; } x2; } *)a0 resultListener:(struct WebOpenPanelResultListenerProxy { void /* function */ **x0; id x1; struct RefPtr<WebKit::WebPageProxy, WTF::DumbPtrTraits<WebKit::WebPageProxy> > { struct WebPageProxy *x0; } x2; } *)a1;
- (id)_photoLibraryButtonLabel;
- (id)_cameraButtonLabelAllowingPhoto:(BOOL)a0 allowingVideo:(BOOL)a1;
- (void)_presentMenuOptionForCurrentInterfaceIdiom:(id)a0;
- (void)dismiss;
- (void)_cancel;

@end
