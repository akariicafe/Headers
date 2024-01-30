@protocol _SFBrowserDocument;

@interface _SFBrowserDocumentActivityItemProvider : _SFActivityItemProvider {
    id<_SFBrowserDocument> _browserDocument;
}

- (void).cxx_destruct;
- (id)item;
- (id)initWithBrowserDocument:(id)a0;

@end
