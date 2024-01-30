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
- (void)_cancelTouchesIfNecessary;
- (void)_resumeTouchesIfNecessary;
- (id)initWithSnippet:(id)a0 extension:(id)a1;
- (id)sashItem;

@end
