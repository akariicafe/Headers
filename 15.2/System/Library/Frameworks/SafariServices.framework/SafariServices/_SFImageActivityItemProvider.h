@class NSData, NSString;

@interface _SFImageActivityItemProvider : _SFActivityItemProvider {
    NSData *_imageOnlyDocumentData;
    NSString *_documentUTI;
}

- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)initWithWebView:(id)a0;
- (id)_imageData;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)item;

@end
