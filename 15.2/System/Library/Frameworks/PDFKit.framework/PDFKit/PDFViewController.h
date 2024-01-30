@class PDFViewControllerPrivate;

@interface PDFViewController : NSObject {
    PDFViewControllerPrivate *_private;
}

- (id)initWithView:(id)a0;
- (void)handleGesture:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)highlight:(id)a0;
- (id)activeAnnotation;
- (void)removeControlForAnnotation:(id)a0;
- (void)setActiveAnnotation:(id)a0;
- (BOOL)isUpdatingSelectionMarkups;
- (void)markupMenuControllerDidHide:(id)a0;
- (void)markupMenuController:(id)a0 setMarkupStyle:(unsigned long long)a1;
- (void)markupMenuControllerEditNote:(id)a0;
- (id)markupMenuPDFView:(id)a0;
- (void)markupMenuControllerDeleteAnnotation:(id)a0;
- (void)markupMenuControllerShowTextSelectionMenu:(id)a0;
- (void)markupMenuControllerLayoutDidChange:(id)a0;
- (void)interactWithAnnotation:(id)a0;
- (unsigned long long)textSelectionMenu;
- (void)showMarkupMenu:(id)a0;
- (void)hideActiveMenus;
- (void)showActiveMenus;
- (void)_clearTextSelectionMenuItems;
- (void)_hidePDFMarkupMenuView;
- (id)_annotationPreceding:(id)a0 wrapAround:(BOOL)a1;
- (id)_annotationFollowing:(id)a0 wrapAround:(BOOL)a1;
- (void)_addControlForAnnotation:(id)a0;
- (void)_postAnnotationHitNotification:(id)a0;
- (id)_pageViewForAnnotation:(id)a0;
- (BOOL)_shouldUpdateMarkupWithStyle:(unsigned long long)a0 onPage:(id)a1 forIndexSet:(id)a2;
- (void)_doButtonHit:(id)a0;
- (void)_postAnnotationWillHitNotification:(id)a0;
- (void)_handleButtonHit:(id)a0;
- (void)showPDFMarkupMenuView;
- (void)handleGesture:(unsigned long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (id)_annotationAtGestureLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_annotationHitLongPress:(id)a0 gestureState:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (void)_annotationHit:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_performDoubleTapAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_hideTextSelectionMenu;
- (void)updateTextSelectionMenuAndShowMenu:(BOOL)a0;
- (id)_annotationsForSelection:(id)a0;
- (id)_menuItemsForTextSelectionMenu:(unsigned long long)a0;
- (void)setMarkupStyle:(unsigned long long)a0 forSelection:(id)a1 clearSelection:(BOOL)a2;
- (void)editNoteForAnnotation:(id)a0;
- (void)setMarkupStyle:(unsigned long long)a0 forAnnotation:(id)a1;
- (id)_getPagePoint:(struct CGPoint { double x0; double x1; } *)a0 forGestureLocation:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 toPageView:(id)a1;
- (void)activateNextAnnotation:(BOOL)a0;
- (void)removeNoteForAnnotation:(id)a0;
- (void)deleteAnnotation:(id)a0;

@end
