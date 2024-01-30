@class UIButton, NSString, PKAttachmentView;

@interface PKTiledTextView : PKTiledView <UITextInteractionDelegate, _UICursorInteractionDelegate>

@property (retain, nonatomic) PKAttachmentView *standInEndAttachmentView;
@property (retain, nonatomic) UIButton *tapToRadarButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (BOOL)interactionShouldBegin:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)_layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)_textView;
- (void)textDidChange:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setLinedPaper:(id)a0;
- (id)standInAttachmentView;
- (void)canvasViewDidEndDrawing:(id)a0;
- (void)canvasViewWillBeginNewStroke:(id)a0 withTouch:(id)a1;
- (BOOL)canAddStroke;
- (BOOL)insertAttachmentIfInBlankSpace:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_shouldUpdateHeightOfAttachments;
- (id)initInScrollView:(id)a0;
- (void)textDidBeginEditing:(id)a0;
- (void)textDidEndEditing:(id)a0;
- (void)_setupTapToRadarButton;
- (void)updateEndAttachment;
- (BOOL)hasEndAttachment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfEndAttachment;
- (void)_tapToRadarButtonTapped:(id)a0;
- (id)saveTempData:(id)a0 name:(id)a1;
- (void)appendPath:(id)a0 attachmentString:(id)a1;

@end
