@class UIView, NSString, PKRecognitionSessionManager, NSArray, PKDrawing, NSMutableDictionary, PKStrokeSpatialCache, NSUUID;

@interface PKAttachmentView : UIView <PKStrokeSpatialCacheDelegate, PKRecognitionSessionManagerDelegate, PKSelectionObserving> {
    NSUUID *_listenerID;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedBounds;
@property (retain, nonatomic) PKRecognitionSessionManager *recognitionManager;
@property (copy, nonatomic) PKDrawing *drawing;
@property (readonly, nonatomic) NSMutableDictionary *tiles;
@property (readonly, nonatomic) NSMutableDictionary *offscreenTiles;
@property (retain, nonatomic) NSArray *additionalStrokes;
@property (retain, nonatomic) UIView *tileContainerView;
@property (readonly, nonatomic) UIView *tileMaskView;
@property (readonly, nonatomic) BOOL isAtEndOfDocument;
@property (nonatomic) BOOL contentHidden;
@property (readonly, nonatomic) double drawingScale;
@property (readonly, nonatomic) PKStrokeSpatialCache *strokeSpatialCache;
@property (nonatomic) BOOL wantsDataDetection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRTL;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)contentTypeForIntersectedStrokes:(id)a0;
- (void)fingerDrawingEnabledDidChange;
- (void)containingScrollViewDidScroll;
- (void)didBeginDrawing;
- (void)didEndDrawing;
- (void)drawingDidEraseStrokes;
- (void)drawingDidChange;
- (void)setAttachmentChromeVisible:(BOOL)a0 animated:(BOOL)a1 highlightBackground:(BOOL)a2;
- (void)updateDrawingHeight:(double)a0;
- (void)visibleOnscreenBoundsDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateFrameForTextContainer;
- (void)pixelAlignForContentScale:(double)a0 enclosingScrollView:(id)a1;
- (BOOL)hitByTouchLocation:(struct CGPoint { double x0; double x1; })a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)hitChrome:(struct CGPoint { double x0; double x1; })a0 isStylus:(BOOL)a1;
- (id)dataDetectorViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)heightFromDrawing:(id)a0 delta:(double)a1;
- (void)updateDrawingHeight:(double)a0 notifyDrawingDidChange:(BOOL)a1;
- (BOOL)wantsFullyRendered;
- (void)fullyRendered;
- (BOOL)disableTileAnimations;
- (void)_initializeRecognitionForDrawingIfNecessary:(id)a0;
- (void)_initializeRecognitionForDrawingIfNecessary:(id)a0 withVisibleOnscreenStrokes:(id)a1;
- (void)updateTileContainerViewFrame;
- (void)fetchIntersectedStrokesAtPoint:(struct CGPoint { double x0; double x1; })a0 selectionType:(long long)a1 inputType:(long long)a2 visibleOnscreenStrokes:(id)a3 completion:(id /* block */)a4;
- (void)fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)a0 completion:(id /* block */)a1;
- (void)updateDataDetectorResults:(id)a0;
- (void)didFinishCalculatingVisibleOnscreenStrokes:(id)a0;
- (void)recognitionSessionManager:(id)a0 foundDataDetectorItems:(id)a1;
- (void)didBeginModifyDrawing;
- (void)didEndModifyDrawing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 drawing:(id)a1;
- (void)fetchIntersectedStrokesBetweenTopPoint:(struct CGPoint { double x0; double x1; })a0 bottomPoint:(struct CGPoint { double x0; double x1; })a1 liveScrollOffset:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (id)_firstStrokesInSelectedStrokes:(id)a0;
- (id)_lastStrokesInSelectedStrokes:(id)a0;

@end
