@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject {
    AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;
}

+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)a0 asTrackID:(int)a1;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)a0 inLayer:(id)a1;
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)a0 inLayer:(id)a1;

- (BOOL)_hasLayerAsAuxiliaryTrack;
- (id)_auxiliaryTrackLayer;
- (BOOL)_hasPostProcessingLayers;
- (int)_auxiliaryTrackID;
- (id)_postProcessingRootLayer;
- (id)_postProcessingVideoLayers;
- (void)dealloc;
- (id)initWithMagicTrackID:(int)a0 animationLayer:(id)a1 videoLayers:(id)a2;

@end
