@class NSString, NSSet;

@interface WFContactTextView : UITextView

@property (nonatomic) BOOL allowsTextEntry;
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSSet *supportedPersonProperties;

- (void)textDidChange:(id)a0;
- (void)setFont:(id)a0;
- (void)cut:(id)a0;
- (void)paste:(id)a0;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)copy:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (id)attributesByAddingTintColorToAttributes:(id)a0;
- (id)attributesForPasting;
- (void)pasteAttributedString:(id)a0;
- (void)updateTextAttachments;
- (void)updateTextContainerInsets;

@end
