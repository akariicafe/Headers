@class CNPostalAddressEditorView, UIColor;

@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell

@property (retain, nonatomic) CNPostalAddressEditorView *addressEditor;
@property (copy, nonatomic) UIColor *editorSeparatorColor;

- (void)layoutMarginsDidChange;
- (void)setPresentingDelegate:(id)a0;
- (void)valueChanged:(id)a0;
- (void)layoutChanged:(id)a0;
- (id)firstResponderItem;
- (void)updateWithPropertyItem:(id)a0;
- (double)leftValueMargin;
- (id)valueView;
- (void).cxx_destruct;
- (id)variableConstraints;
- (void)setBackgroundColor:(id)a0;

@end
