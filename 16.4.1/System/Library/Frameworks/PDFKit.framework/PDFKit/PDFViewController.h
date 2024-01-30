@class NSString, PDFViewControllerPrivate;

@interface PDFViewController : NSObject <UIEditMenuInteractionDelegate> {
    PDFViewControllerPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2;
- (void)handleGesture:(id)a0;
- (void)highlight:(id)a0;
- (id)initWithView:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_activateAnotation:(id)a0;
- (void)_addControlForAnnotation:(id)a0;
- (void)setMarkupStyle:(unsigned long long)a0;
- (id)_annotationAtGestureLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_annotationHit:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)_annotationsForSelection:(id)a0;
- (void)showActiveMenus;
- (void)_postAnnotationHitNotification:(id)a0;
- (void)hideActiveMenus;
- (void)_activateNearestAnnotationFromPage:(id)a0 startPage:(id)a1 previous:(BOOL)a2 withCompletion:(id /* block */)a3;
- (id)_annotationFollowing:(id)a0 wrapAround:(BOOL)a1;
- (void)_annotationHitLongPress:(id)a0 gestureState:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)_annotationIsValidTextFieldToActivate:(id)a0;
- (id)_annotationPreceding:(id)a0 wrapAround:(BOOL)a1;
- (void)_closeTextEditingMenu;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 toPageView:(id)a1;
- (void)_doButtonHit:(id)a0;
- (id)_getPagePoint:(struct CGPoint { double x0; double x1; } *)a0 forGestureLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_handleButtonHit:(id)a0;
- (BOOL)_handleFormFillingEventAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_hidePDFMarkupMenuView;
- (void)_hideTextSelectionMenu;
- (id)_pageViewForAnnotation:(id)a0;
- (void)_performDoubleTapAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)_populateDetectedFormFieldsOnPage:(id)a0;
- (void)_postAnnotationWillHitNotification:(id)a0;
- (BOOL)_shouldUpdateMarkupWithStyle:(unsigned long long)a0 onPage:(id)a1 forIndexSet:(id)a2;
- (void)activateNearestAnnotation:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)activateNextAnnotation:(BOOL)a0;
- (void)activateNextAnnotation:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)activeAnnotation;
- (id)addAnnotationForDetectedFormField:(id)a0 onPage:(id)a1 activate:(BOOL)a2;
- (id)additionalEditMenuElementsForMarkupAnnotation:(id)a0;
- (id)additionalEditMenuElementsForSelection:(id)a0;
- (void)deleteAnnotation;
- (void)editNoteForAnnotation:(id)a0;
- (void)handleGesture:(unsigned long long)a0 state:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2;
- (void)interactWithAnnotation:(id)a0;
- (BOOL)isUpdatingSelectionMarkups;
- (void)removeControlForAnnotation:(id)a0;
- (void)removeNoteForAnnotation:(id)a0;
- (void)setActiveAnnotation:(id)a0;
- (void)setMarkupStyle:(unsigned long long)a0 forAnnotation:(id)a1;
- (void)setMarkupStyle:(unsigned long long)a0 forSelection:(id)a1 clearSelection:(BOOL)a2;
- (void)showMarkupStyleMenuForMarkupAnnotation;
- (void)showMenuForMarkupAnnotation:(id)a0;
- (unsigned long long)textSelectionMenu;

@end
