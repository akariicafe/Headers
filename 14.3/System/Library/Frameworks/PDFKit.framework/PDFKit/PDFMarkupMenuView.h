@class PDFMarkupMenuViewPrivate;

@interface PDFMarkupMenuView : UIView {
    PDFMarkupMenuViewPrivate *_private;
}

- (void)_setupViews;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hide;
- (id)initWithDelegate:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateAppearance;
- (id)_newMaskView:(long long)a0;
- (id)_menuControls;
- (BOOL)_shouldShowCompactMenu;
- (void)_setControls:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeThatFitsControls:(id)a0;
- (void)_setBlurDisabled:(BOOL)a0;
- (void)_handleDeleteButtonTap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dividerLineRectForControl:(long long)a0;
- (int)_colorPaletteMenuIconForMarkupStyle:(unsigned long long)a0;
- (int)_noteMenuIconForMarkupStyle:(unsigned long long)a0;
- (int)_colorMenuIconForMarkupStyle:(unsigned long long)a0;
- (void)useColorOf:(id)a0;
- (void)showColorControlsMenu:(id)a0;
- (void)handleDeleteButtonTap:(id)a0;
- (void)handleAddNoteButton:(id)a0;
- (void)handleRightArrowButton:(id)a0;
- (void)setMarkupStyle:(unsigned long long)a0;
- (void)setMarkupNoteStyle:(unsigned long long)a0;
- (void)presentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 view:(id)a1 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
