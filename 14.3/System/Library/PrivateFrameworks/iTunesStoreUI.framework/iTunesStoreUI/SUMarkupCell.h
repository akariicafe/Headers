@class SUWebDocumentView;

@interface SUMarkupCell : SUTableCell {
    SUWebDocumentView *_webView;
}

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setConfiguration:(id)a0;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;

@end
