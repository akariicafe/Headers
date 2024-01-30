@class TSDInteractiveCanvasController, NSMutableSet;

@interface TSDTilingHostingLayer : TSDNoDefaultImplicitActionLayer {
    NSMutableSet *mDirtyTilingLayers;
}

@property (nonatomic) TSDInteractiveCanvasController *controller;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)p_commonInit;
- (void)setNeedsDisplayForDirtyTiles:(id)a0;

@end
