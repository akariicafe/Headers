@class NSString;

@interface SnippetUI.TextViewWithPlaceholder : UITextView {
    void /* unknown type, empty encoding */ placeholder;
    void /* unknown type, empty encoding */ placeholderColor;
}

@property (nonatomic, copy) NSString *text;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
