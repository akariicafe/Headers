@class SUWebDocumentView;

@interface SUMarkupCell : SUTableCell {
    SUWebDocumentView *_webView;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (void)setConfiguration:(id)a0;

@end
