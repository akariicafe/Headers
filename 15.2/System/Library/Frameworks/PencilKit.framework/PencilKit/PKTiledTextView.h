@class UIButton, NSString, UIView;
@protocol PKTextAttachmentDrawingViewProviderView;

@interface PKTiledTextView : PKTiledView <UITextInteractionDelegate, UIPointerInteractionDelegate>

@property (retain, nonatomic) UIView<PKTextAttachmentDrawingViewProviderView> *standInEndAttachmentView;
@property (retain, nonatomic) UIButton *tapToRadarButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)_textView;
- (BOOL)interactionShouldBegin:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initInScrollView:(id)a0 sixChannelBlending:(BOOL)a1 defaultDrawingClass:(Class)a2;
- (id)viewForAttachmentAtBlankSpace;
- (id)standInAttachmentView;
- (void)canvasViewDidEndDrawing:(id)a0;
- (void)canvasViewWillBeginNewStroke:(id)a0 withTouch:(id)a1;
- (BOOL)_shouldExpandBottomAttachmentForDragAndDrop;
- (BOOL)canAddStroke;
- (BOOL)insertAttachmentIfInBlankSpace:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldUpdateHeightOfAttachments;
- (void)setDefaultDrawingClass:(Class)a0;
- (void)setLinedPaper:(id)a0;
- (void)updateEndAttachment;
- (void)textDidBeginEditing:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (void)_addStandInEndAttachmentView;
- (void)_setupTapToRadarButton;
- (BOOL)hasEndAttachment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfEndAttachment;
- (void)_tapToRadarButtonTapped:(id)a0;
- (id)saveTempData:(id)a0 name:(id)a1;
- (void)appendPath:(id)a0 attachmentString:(id)a1;

@end
