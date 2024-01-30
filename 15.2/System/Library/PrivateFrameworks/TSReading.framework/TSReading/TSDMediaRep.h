@class CAShapeLayer, TSDMediaLayout, CALayer, TSDMediaInfo, TSDFrameRep;

@interface TSDMediaRep : TSDStyledRep {
    BOOL mIsZooming;
    CALayer *mTapToReplaceLayer;
    CAShapeLayer *mMaskLayer;
    CAShapeLayer *mStrokeLayer;
    CALayer *mFrameMaskLayer;
    TSDFrameRep *mFrameRep;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mLastPictureFrameLayerRect;
}

@property (readonly, nonatomic) TSDMediaInfo *mediaInfo;
@property (readonly, nonatomic) TSDMediaLayout *mediaLayout;
@property (readonly, nonatomic) BOOL shouldShowMediaReplaceUI;

- (BOOL)isPlaceholder;
- (void)dealloc;
- (void)willBeginZooming;
- (void)processChangedProperty:(int)a0;
- (void)didEndZooming;
- (id)additionalLayersOverLayer;
- (id)overlayLayers;
- (BOOL)shouldCreateKnobs;
- (void)addKnobsToArray:(id)a0;
- (void)updatePositionsOfKnobs:(id)a0;
- (struct CGPoint { double x0; double x1; })positionOfHyperlinkKnob;
- (BOOL)replaceButtonContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)i_updateFrameRep;
- (BOOL)shouldAllowReplacementFromPaste;
- (id)visibleMediaReplaceButtonLayer;
- (BOOL)i_shouldRenderStroke:(id)a0;
- (BOOL)canResetMediaSize;
- (BOOL)shouldAllowReplacementFromDrop;
- (void)p_addLayerForReplaceButtonToArray:(id)a0;
- (struct CGSize { double x0; double x1; })p_replaceButtonSize;
- (id)p_tapToReplaceLayer;
- (id)currentReplaceButtonImage;
- (void)p_updateTapToReplaceLayerPosition;
- (struct CGPoint { double x0; double x1; })p_scaledPositionOfImageReplaceKnob;
- (id)currentReplaceButtonHighlightedImage;

@end
