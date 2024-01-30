@class NSString;

@interface ACUILinkButton : UIButton

@property (retain) NSString *acui_titleString;

- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_normalStringAttributes;
- (id)_highlightedStringAttributes;
- (id)initWithText:(id)a0 target:(id)a1 action:(SEL)a2;

@end
