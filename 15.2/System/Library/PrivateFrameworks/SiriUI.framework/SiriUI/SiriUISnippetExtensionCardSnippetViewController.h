@class SiriUISashItem, NSExtension, SAUISnippet;

@interface SiriUISnippetExtensionCardSnippetViewController : SiriUICardSnippetViewController {
    SAUISnippet *_snippet;
    SiriUISashItem *_sashItem;
}

@property (retain, nonatomic) NSExtension *extension;

+ (void)initialize;

- (id)snippet;
- (void).cxx_destruct;
- (id)sashItem;
- (void)setSnippet:(id)a0;
- (id)initWithSnippet:(id)a0 extension:(id)a1;
- (void)_cancelTouchesIfNecessary;
- (void)_resumeTouchesIfNecessary;

@end
