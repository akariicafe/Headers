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
- (BOOL)isInvisible;
- (void)dealloc;
- (BOOL)isDraggable;
- (void)willBeRemoved;
- (id)childReps;
- (void)processChangedProperty:(int)a0;
- (unsigned long long)enabledKnobMask;
- (void)selectChildRep:(id)a0;
- (id)hitRep:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldShowKnobs;
- (void)addAdditionalChildLayersToArray:(id)a0;
- (id)additionalLayersOverLayer;
- (BOOL)canBeginEditingChildRepOnDoubleTap:(id)a0;
- (BOOL)canSelectChildRep:(id)a0;
- (int)dragTypeAtCanvasPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)handleSingleTapAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)hitReps:(struct CGPoint { double x0; double x1; })a0 withSlop:(struct CGSize { double x0; double x1; })a1;
- (id)hyperlinkRegions;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (BOOL)isEditingChildRep;
- (BOOL)mustDrawTilingLayerOnMainThread:(id)a0;
- (id)overlayLayers;
- (double)pParagraphAlignmentOffset;
- (id)p_overflowKnobImage;
- (void)p_resetOverflowGlyphLayerIfNecessary;
- (BOOL)p_shouldShowTextOverflowGlyph;
- (void)shapeLayoutDidChangeContainedStorage:(id)a0;
- (BOOL)shapeLayoutShouldUpdateInstructionalText:(id)a0;
- (BOOL)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint { double x0; double x1; })a0 withRecognizer:(id)a1;
- (BOOL)shouldShowSelectionHighlight;
- (void)updateChildrenFromLayout;
- (BOOL)wantsToHandleTapsOnContainingGroup;
- (BOOL)wantsToHandleTapsWhenLocked;
- (void)willBeginEditingContainedRep;
- (void)willEndEditingContainedRep;

@end
