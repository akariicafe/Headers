@class UILabel, UITextView, NSString;

@interface TSKCellEditorField : UIView

@property (retain, nonatomic) UILabel *leftSymbolView;
@property (retain, nonatomic) UILabel *rightSymbolView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *leftSymbol;
@property (retain, nonatomic) NSString *rightSymbol;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)p_symbolContainerBackgroundColor;

@end
