@class TSDMediaInfo, TSDMutableStroke;

@interface TSDMediaLayout : TSDStyledLayout <TSDMediaSizeResetting> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedAlignmentFrame;
    struct { unsigned char alignmentFrame : 1; } _mediaInvalidFlags;
    TSDMutableStroke *_dynamicStroke;
    BOOL _shouldRenderFrameStroke;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundsForStandardKnobs;
}

@property (readonly, nonatomic) TSDMediaInfo *mediaInfo;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentFrameInRoot;

- (void)setGeometry:(id)a0;
- (id)stroke;
- (BOOL)supportsRotation;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (void)processChangedProperty:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (BOOL)isStrokeBeingManipulated;
- (void)invalidateAlignmentFrame;
- (BOOL)shouldRenderFrameStroke;
- (void)setShouldRenderFrameStroke:(BOOL)a0;
- (void)setBoundsForStandardKnobs:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeAlignmentFrameInRoot:(BOOL)a0;

@end
