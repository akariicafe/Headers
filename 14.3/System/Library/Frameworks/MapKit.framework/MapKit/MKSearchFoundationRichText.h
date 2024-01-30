@interface MKSearchFoundationRichText : SFRichText

@property (copy, nonatomic) id /* block */ completionHandlers;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)_invokeCompletionHandlers;
- (BOOL)isRichTextResolved;
- (void)loadRichTextWithCompletionHandler:(id /* block */)a0;
- (void)setFormattedTextPieces:(id)a0;
- (id)initRichTextTitleWithMapItem:(id)a0 resultsType:(unsigned long long)a1;
- (void)setText:(id)a0;

@end
