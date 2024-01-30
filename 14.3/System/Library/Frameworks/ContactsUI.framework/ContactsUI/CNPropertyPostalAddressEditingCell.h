@class CNPostalAddressEditorView, UIColor;

@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell

@property (retain, nonatomic) CNPostalAddressEditorView *addressEditor;
@property (copy, nonatomic) UIColor *editorSeparatorColor;

- (void)layoutMarginsDidChange;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)valueChanged:(id)a0;
- (void)layoutChanged:(id)a0;
- (id)variableConstraints;
- (void)setPresentingDelegate:(id)a0;
- (id)valueView;
- (id)firstResponderItem;
- (void)updateWithPropertyItem:(id)a0;
- (double)leftValueMargin;

@end
