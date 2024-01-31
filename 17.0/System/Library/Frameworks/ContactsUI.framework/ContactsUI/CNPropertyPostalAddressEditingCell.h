@class CNPostalAddressEditorView, UIColor;

@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell

@property (retain, nonatomic) CNPostalAddressEditorView *addressEditor;
@property (copy, nonatomic) UIColor *editorSeparatorColor;

- (void)layoutMarginsDidChange;
- (void)setBackgroundColor:(id)a0;
- (void)setPresentingDelegate:(id)a0;
- (void).cxx_destruct;
- (void)valueChanged:(id)a0;
- (double)leftValueMargin;
- (id)firstResponderItem;
- (void)layoutChanged:(id)a0;
- (void)updateWithPropertyItem:(id)a0;
- (id)valueView;
- (id)variableConstraints;

@end
