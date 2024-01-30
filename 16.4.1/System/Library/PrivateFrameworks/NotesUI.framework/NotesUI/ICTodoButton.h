@class UIColor, ICTrackedParagraph;

@interface ICTodoButton : UIButton

@property (nonatomic) struct CGSize { double width; double height; } defaultImageSize;
@property (nonatomic) BOOL trackedParagraphIsRTL;
@property (nonatomic, getter=isDone) BOOL done;
@property (weak, nonatomic) ICTrackedParagraph *trackedParagraph;
@property (copy, nonatomic) UIColor *highlightColor;
@property (nonatomic) struct CGSize { double width; double height; } defaultSize;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (id)debugDescription;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)updateTintColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (id)_icaxParentUITextView;
- (id)icaxCorrespondingParagraphText;
- (id)imageForChecked:(BOOL)a0 withHighlight:(BOOL)a1;
- (id)initWithDragDelegate:(id)a0;
- (void)setDone:(BOOL)a0 animated:(BOOL)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftToRight:(BOOL)a1;
- (void)trackedParagraphDidChange;
- (void)updateImagesAnimated:(BOOL)a0;
- (void)wasPressed;

@end
