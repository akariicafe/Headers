@class SiriUISashItem, NSExtension, SAUISnippet;

@interface SiriUISnippetExtensionCardSnippetViewController : SiriUICardSnippetViewController {
    SAUISnippet *_snippet;
    SiriUISashItem *_sashItem;
}

@property (retain, nonatomic) NSExtension *extension;

+ (void)initialize;

- (void).cxx_destruct;
- (id)snippet;
- (void)setSnippet:(id)a0;
- (id)sashItem;
- (id)initWithSnippet:(id)a0 extension:(id)a1;
- (void)_cancelTouchesIfNecessary;
- (void)_resumeTouchesIfNecessary;

@end
