@interface MKSearchFoundationRichText : SFRichText

@property (copy, nonatomic) id /* block */ completionHandlers;

- (id)initWithString:(id)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)_invokeCompletionHandlers;
- (id)initRichTextTitleWithMapItem:(id)a0 resultsType:(unsigned long long)a1;
- (BOOL)isRichTextResolved;
- (void)loadRichTextWithCompletionHandler:(id /* block */)a0;
- (void)setFormattedTextPieces:(id)a0;

@end
