@class TSWPRep, NSString, CALayer, NSObject;
@protocol TSDContainerInfo;

@interface TSWPShapeRep : TSDShapeRep <CALayerDelegate, TSDContainerRep, TSWPShapeLayoutDelegate> {
    BOOL _editingContainedRep;
    CALayer *_overflowGlyphLayer;
}

@property (readonly, nonatomic) TSWPRep *containedRep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (BOOL)isInvisible;
- (BOOL)isDraggable;
- (void)willBeRemoved;
- (id)hitRep:(struct CGPoint { double x0; double x1; })a0;
- (id)childReps;
- (void)processChangedProperty:(int)a0;
- (void)addAdditionalChildLayersToArray:(id)a0;
- (BOOL)canSelectChildRep:(id)a0;
- (void)selectChildRep:(id)a0;
- (BOOL)canBeginEditingChildRepOnDoubleTap:(id)a0;
- (void)willBeginEditingContainedRep;
- (void)willEndEditingContainedRep;
- (id)hitReps:(struct CGPoint { double x0; double x1; })a0 withSlop:(struct CGSize { double x0; double x1; })a1;
- (BOOL)wantsToHandleTapsWhenLocked;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (BOOL)mustDrawTilingLayerOnMainThread:(id)a0;
- (unsigned long long)enabledKnobMask;
- (BOOL)shouldShowKnobs;
- (BOOL)shouldShowSelectionHighlight;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)updateChildrenFromLayout;
- (BOOL)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint { double x0; double x1; })a0 withRecognizer:(id)a1;
- (BOOL)wantsToHandleTapsOnContainingGroup;
- (int)dragTypeAtCanvasPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)hyperlinkRegions;
- (BOOL)isEditingChildRep;
- (id)p_overflowKnobImage;
- (BOOL)p_shouldShowTextOverflowGlyph;
- (void)p_resetOverflowGlyphLayerIfNecessary;
- (BOOL)shapeLayoutShouldUpdateInstructionalText:(id)a0;
- (void)shapeLayoutDidChangeContainedStorage:(id)a0;
- (double)pParagraphAlignmentOffset;

@end
