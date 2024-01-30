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
- (BOOL)shouldAllowReplacementFromPaste;
- (void)addKnobsToArray:(id)a0;
- (id)additionalLayersOverLayer;
- (BOOL)canResetMediaSize;
- (id)currentReplaceButtonHighlightedImage;
- (id)currentReplaceButtonImage;
- (void)didEndZooming;
- (BOOL)i_shouldRenderStroke:(id)a0;
- (void)i_updateFrameRep;
- (id)overlayLayers;
- (void)p_addLayerForReplaceButtonToArray:(id)a0;
- (struct CGSize { double x0; double x1; })p_replaceButtonSize;
- (struct CGPoint { double x0; double x1; })p_scaledPositionOfImageReplaceKnob;
- (id)p_tapToReplaceLayer;
- (void)p_updateTapToReplaceLayerPosition;
- (struct CGPoint { double x0; double x1; })positionOfHyperlinkKnob;
- (BOOL)replaceButtonContainsPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)shouldAllowReplacementFromDrop;
- (BOOL)shouldCreateKnobs;
- (void)updatePositionsOfKnobs:(id)a0;
- (id)visibleMediaReplaceButtonLayer;

@end
