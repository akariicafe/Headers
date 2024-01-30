@class UIColor, ICTrackedParagraph;

@interface ICTodoButton : UIButton

@property (nonatomic) struct CGSize { double width; double height; } defaultImageSize;
@property (nonatomic) BOOL trackedParagraphIsRTL;
@property (nonatomic, getter=isDone) BOOL done;
@property (weak, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (copy, nonatomic) UIColor *highlightColor;
@property (nonatomic) struct CGSize { double width; double height; } defaultSize;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTintColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (void).cxx_destruct;
- (id)init;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)debugDescription;
- (void)updateImagesAnimated:(BOOL)a0;
- (void)setDone:(BOOL)a0 animated:(BOOL)a1;
- (void)trackedParagraphDidChange;
- (id)imageForChecked:(BOOL)a0 withHighlight:(BOOL)a1;
- (id)icaxCorrespondingParagraphText;
- (id)_icaxParentUITextView;
- (id)initWithDragDelegate:(id)a0;
- (void)wasPressed;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftToRight:(BOOL)a1;

@end
