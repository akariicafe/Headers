@protocol _SFBrowserDocument;

@interface _SFBrowserDocumentActivityItemProvider : _SFActivityItemProvider {
    id<_SFBrowserDocument> _browserDocument;
}

- (id)item;
- (void).cxx_destruct;
- (id)initWithBrowserDocument:(id)a0;

@end
