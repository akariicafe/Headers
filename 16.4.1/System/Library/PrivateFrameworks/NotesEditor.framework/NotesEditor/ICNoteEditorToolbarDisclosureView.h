@class ICNoteEditorToolbarPlusView, UIImageView, UIColor;

@interface ICNoteEditorToolbarDisclosureView : UIView

@property (retain, nonatomic) ICNoteEditorToolbarPlusView *openView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (nonatomic) BOOL closeState;
@property (readonly, nonatomic) UIColor *itemColor;

- (id)accessibilityLabel;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;

@end
