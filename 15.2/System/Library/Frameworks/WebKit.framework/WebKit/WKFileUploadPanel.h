@class NSString;
@protocol WKFileUploadPanelDelegate;

@interface WKFileUploadPanel : UIViewController <UIPopoverControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, UIAdaptivePresentationControllerDelegate, UIContextMenuInteractionDelegate> {
    struct WeakObjCPtr<WKContentView> { id m_weakReference; } _view;
    struct RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::RawPtrTraits<WebKit::WebOpenPanelResultListenerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebOpenPanelResultListenerProxy>> { struct WebOpenPanelResultListenerProxy *m_ptr; } _listener;
    struct RetainPtr<NSSet<NSString *>> { void *m_ptr; } _acceptedUTIs;
    struct OptionSet<WKFileUploadPanelImagePickerType> { unsigned char m_storage; } _allowedImagePickerTypes;
    struct CGPoint { double x; double y; } _interactionPoint;
    BOOL _allowMultipleFiles;
    BOOL _usingCamera;
    struct RetainPtr<WKFileUploadMediaTranscoder> { void *m_ptr; } _mediaTranscoder;
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

- (id)initWithView:(id)a0;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)imagePickerController:(id)a0 didFinishPickingMultipleMediaWithInfo:(id)a1;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)_uploadItemForImageData:(id)a0 imageName:(id)a1 successBlock:(id /* block */)a2 failureBlock:(id /* block */)a3;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)dismiss;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_processMediaInfoDictionaries:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void).cxx_destruct;
- (void)_cancel;
- (void)removeContextMenuInteraction;
- (void)_chooseFiles:(id)a0 displayString:(id)a1 iconImage:(id)a2;
- (BOOL)platformSupportsPickerViewController;
- (void)showFilePickerMenu;
- (void)showDocumentPickerMenu;
- (id)_chooseFilesButtonLabel;
- (void)ensureContextMenuInteraction;
- (void)_uploadMediaItemsTranscodingVideo:(id)a0;
- (void)_processMediaInfoDictionaries:(id)a0 atIndex:(unsigned long long)a1 processedResults:(id)a2 successBlock:(id /* block */)a3 failureBlock:(id /* block */)a4;
- (void)_chooseMediaItems:(id)a0;
- (void)presentWithParameters:(void *)a0 resultListener:(void *)a1;
- (id)currentAvailableActionTitles;
- (id)acceptedTypeIdentifiers;
- (id)_photoLibraryButtonLabel;
- (void)_presentMenuOptionForCurrentInterfaceIdiom:(id)a0;
- (void)_dispatchDidDismiss;
- (void)dealloc;
- (id)_mediaTypesForPickerSourceType:(long long)a0;
- (id)_cameraButtonLabel;
- (void)_adjustMediaCaptureType;
- (void)_presentPopoverWithContentViewController:(id)a0 animated:(BOOL)a1;
- (void)_presentFullscreenViewController:(id)a0 animated:(BOOL)a1;
- (void)_dismissDisplayAnimated:(BOOL)a0;
- (void)_showPhotoPickerWithSourceType:(long long)a0;
- (BOOL)_shouldMediaCaptureOpenMediaDevice;
- (void)_uploadItemFromMediaInfo:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (BOOL)_willMultipleSelectionDelegateBeCalled;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (id).cxx_construct;

@end
