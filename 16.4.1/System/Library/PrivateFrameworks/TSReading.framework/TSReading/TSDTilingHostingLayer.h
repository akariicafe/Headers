@class TSDInteractiveCanvasController, NSMutableSet;

@interface TSDTilingHostingLayer : TSDNoDefaultImplicitActionLayer {
    NSMutableSet *mDirtyTilingLayers;
}

@property (nonatomic) TSDInteractiveCanvasController *controller;

- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)init;
- (void)p_commonInit;
- (void)setNeedsDisplayForDirtyTiles:(id)a0;

@end
