@interface MKSearchFoundationRichText : SFRichText

@property (copy, nonatomic) id /* block */ completionHandlers;

- (void)loadRichTextWithCompletionHandler:(id /* block */)a0;
- (id)initWithString:(id)a0;
- (void)setFormattedTextPieces:(id)a0;
- (BOOL)isRichTextResolved;
- (void)_invokeCompletionHandlers;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)initRichTextTitleWithMapItem:(id)a0 resultsType:(unsigned long long)a1;

@end
