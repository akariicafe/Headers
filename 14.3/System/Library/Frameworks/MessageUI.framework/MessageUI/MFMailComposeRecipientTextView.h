@class NSString, MFComposeDisplayMetrics;
@protocol MFMailComposeRecipientTextViewDelegate;

@interface MFMailComposeRecipientTextView : CNComposeRecipientTextView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, _UICursorInteractionDelegate>

@property (retain, nonatomic) MFComposeDisplayMetrics *displayMetrics;
@property (weak, nonatomic) id<MFMailComposeRecipientTextViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (void)layoutMarginsDidChange;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (void)_displayMetricsDidChange;
- (BOOL)_scribbleInteraction:(id)a0 shouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)_scribbleInteraction:(id)a0 focusWillTransformElement:(id)a1;
- (id)nextResponder;
- (void)_scribbleInteraction:(id)a0 requestElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)_textInputDidChange:(id)a0;
- (void)_scribbleInteraction:(id)a0 focusElement:(id)a1 initialFocusSelectionReferencePoint:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (double)beamHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cursorRectForLineContainingGlyphIndex:(unsigned long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scribbleInteraction:(id)a0 frameForElement:(id)a1;

@end
