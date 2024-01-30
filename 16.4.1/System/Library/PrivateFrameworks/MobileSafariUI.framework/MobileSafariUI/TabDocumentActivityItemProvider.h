@class TabDocument;

@interface TabDocumentActivityItemProvider : _SFActivityItemProvider

@property (readonly, nonatomic) TabDocument *tabDocument;

- (id)item;
- (void).cxx_destruct;
- (id)initWithTabDocument:(id)a0;

@end
