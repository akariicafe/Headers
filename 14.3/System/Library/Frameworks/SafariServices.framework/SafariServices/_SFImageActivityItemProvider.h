@class NSData, NSString;

@interface _SFImageActivityItemProvider : _SFActivityItemProvider {
    NSData *_imageOnlyDocumentData;
    NSString *_documentUTI;
}

- (id)item;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;
- (id)_imageData;

@end
