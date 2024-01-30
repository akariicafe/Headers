@interface SwiftUI.FileImportExportBridge : NSObject <UIDocumentPickerDelegate> {
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ presentationState;
    void /* unknown type, empty encoding */ presentedPicker;
}

- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
