@interface VisionHealthAppPlugin.VisionPrescriptionManualDataEntryImageSelectionHandler : NSObject <VNDocumentCameraViewControllerDelegate, UIDocumentPickerDelegate> {
    void /* unknown type, empty encoding */ fileManager;
    void /* unknown type, empty encoding */ _selectedImageURL;
}

- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentCameraViewController:(id)a0 didFinishWithScan:(id)a1;
- (void)documentCameraViewControllerDidCancel:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
