@class PKPassField, NSString, UITextView;

@interface PKBackFieldTableCell : PKTableViewCell <UITextViewDelegate> {
    UITextView *_valueTextView;
    double _cachedWidth;
    double _computedHeight;
    BOOL _useBridgeStyle;
}

@property (retain, nonatomic) PKPassField *field;
@property (nonatomic) BOOL showLinks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleFont;
+ (id)reuseIdentifier;
+ (id)valueFont;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_textBounds;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_linkTextAttributes;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)dealloc;
- (id)initWithField:(id)a0 showLinks:(BOOL)a1;
- (id)initWithField:(id)a0 showLinks:(BOOL)a1 useBridgeStyle:(BOOL)a2;
- (void)_detectLinks;
- (void)_setupTextAttributes;

@end
