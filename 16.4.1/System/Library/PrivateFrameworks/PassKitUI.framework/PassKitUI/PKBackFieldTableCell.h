@class PKPassField, NSString, UITextView;

@interface PKBackFieldTableCell : PKTableViewCell <UITextViewDelegate> {
    UITextView *_valueTextView;
    double _cachedWidth;
    double _computedHeight;
    BOOL _useBridgeStyle;
}

@property (retain, nonatomic) PKPassField *field;
@property (nonatomic) BOOL showLinks;
@property (nonatomic) BOOL useLargeTitleFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_linkTextAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textBounds;
- (void)_detectLinks;
- (void)_setupTextAttributes;
- (id)initWithField:(id)a0 showLinks:(BOOL)a1;
- (id)initWithField:(id)a0 showLinks:(BOOL)a1 useBridgeStyle:(BOOL)a2;

@end
