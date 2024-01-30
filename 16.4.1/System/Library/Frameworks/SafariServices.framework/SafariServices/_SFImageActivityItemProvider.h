@class NSData, NSString;

@interface _SFImageActivityItemProvider : _SFActivityItemProvider {
    NSData *_imageOnlyDocumentData;
    NSString *_documentUTI;
}

- (id)item;
- (id)initWithWebView:(id)a0;
- (id)_imageData;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;

@end
