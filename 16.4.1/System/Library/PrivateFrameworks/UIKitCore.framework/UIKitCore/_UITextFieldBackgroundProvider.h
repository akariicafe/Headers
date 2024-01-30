@class UITextField;

@interface _UITextFieldBackgroundProvider : NSObject {
    UITextField *_textField;
}

@property (readonly, weak, nonatomic) UITextField *textField;
@property (readonly, nonatomic) long long associatedBorderStyle;
@property (readonly, nonatomic) BOOL drawsContent;

- (void)_buildDescription:(id)a0;
- (id)overridingSetBackgroundColor:(id)a0;
- (BOOL)hitTestView:(id)a0;
- (void)layoutIfNeeded;
- (void)removeFromTextField;
- (void)populateArchivedSubviews:(id)a0;
- (void)didChangeFirstResponder;
- (void)addToTextField:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)enabledDidChangeAnimated:(BOOL)a0;
- (void)setNeedsDisplay;
- (id)preferredMetricsProvider;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)traitCollectionDidChange:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)overridingGetBackgroundColor;
- (BOOL)_isTV;
- (void)borderStyleDidChange:(BOOL)a0;
- (void)controlSizeDidChange:(BOOL)a0;
- (void)decodeWithCoder:(id)a0;
- (id)focusRingPathForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)highlightedDidChangeAnimated:(BOOL)a0;
- (void)selectedDidChangeAnimated:(BOOL)a0;

@end
