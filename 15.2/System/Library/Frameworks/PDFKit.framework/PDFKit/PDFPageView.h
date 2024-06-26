@class NSString, PDFPageViewPrivate;

@interface PDFPageView : UIView <UITextViewDelegate, PDFPageLayerInterface> {
    PDFPageViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateBackgroundColor;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)page;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)isVisible;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)hasBackgroundImage;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)clearTiles;
- (id)backgroundImage;
- (void)addAnnotation:(id)a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeAnnotation:(id)a0;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)activeAnnotation;
- (void)_didRotatePageNotification:(id)a0;
- (void)_addPDFAnnotationTextWidget:(id)a0;
- (void)_addPDFAnnotationChoiceWidget:(id)a0;
- (void)_rotateActiveAnnotation;
- (void)removeControlForAnnotation:(id)a0;
- (void)addControlForAnnotation:(id)a0;
- (id)markupAnnotationsForIndexSet:(id)a0;
- (void)addMarkupWithStyle:(unsigned long long)a0 forIndexSet:(id)a1;
- (long long)displayBox;
- (void)setEnableTileUpdates:(BOOL)a0;
- (id)renderingProperties;
- (void)setBackgroundImage:(id)a0 atBackgroundQuality:(int)a1;
- (void)setNeedsTilesUpdate;
- (id)initWithPage:(id)a0 geometryInterface:(id)a1 andRenderingProperties:(id)a2;
- (void)addSearchSelection:(id)a0;
- (id)pageLayer;
- (void)updateAnnotation:(id)a0;
- (void)updateBookmark;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToPageView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)backgroundImageQuality;
- (id)geometryInterface;
- (unsigned long long)visibilityDelegateIndex;
- (void)updatePageLayerEffectForID:(id)a0;
- (id)pageLayerEffectForID:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })layerEffectTransform;
- (void)updatePageLayerEffects;
- (void)forceTileUpdate;
- (void)addPageLayerEffect:(id)a0;
- (void)removePageLayerEffectForID:(id)a0;
- (void)scalePageLayerEffects:(double)a0;
- (BOOL)enablesTileUpdates;
- (void)saveOriginalTileLayout;
- (void)restoreOriginalTileLayout;
- (void)applyTileLayoutScale:(double)a0;
- (void)setVisibilityDelegateIndex:(unsigned long long)a0;
- (void)_setupBookmarkLayer;
- (void)_setuppageAnnotationEffects;
- (void)_formChanged:(id)a0;
- (void)_addPDFAnnotation:(id)a0;
- (void)_updateAnnotationVisibility:(id)a0;
- (void)_updateWidgetControl:(id)a0 forBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addBookmark;
- (void)_addPDFAnnotationStampSignature:(id)a0;
- (void)colorWidgetBackgrounds:(BOOL)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_rotationTransformForPageView;
- (BOOL)_allowsFormFieldEntry;
- (void)_choiceWidgetDone;
- (void)setStringValue:(id)a0 onChoiceWidgetAnnotation:(id)a1 withTableView:(id)a2;
- (void)setStringValue:(id)a0 onChoiceWidgetAnnotation:(id)a1 withTextField:(id)a2;
- (void)_setAttributedStringForAnnotation:(id)a0 stringValue:(id)a1 textView:(id)a2;
- (BOOL)_shouldReplaceStringOnAnnotation:(id)a0 withTextView:(id)a1;
- (void)setStringValue:(id)a0 onTextWidgetAnnotation:(id)a1 withTextView:(id)a2;
- (void)setState:(long long)a0 onButtonWidgetAnnotation:(id)a1;
- (void)setSearchSelections:(id)a0;
- (void)previewRotatePage:(double)a0;
- (void)hideTileLayer:(BOOL)a0;
- (void)removeBookmark;
- (struct CGPoint { double x0; double x1; })convertPointToPageView:(struct CGPoint { double x0; double x1; })a0;

@end
