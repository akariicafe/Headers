@class TabDocument;

@interface TabDocumentActivityItemProvider : _SFActivityItemProvider

@property (readonly, nonatomic) TabDocument *tabDocument;

- (void).cxx_destruct;
- (id)item;
- (id)initWithTabDocument:(id)a0;

@end
