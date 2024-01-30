@class CALayer, NSString;
@protocol HKGraphTileDrawingDelegate;

@interface HKGraphTile : NSObject <CALayerDelegate>

@property (retain, nonatomic) CALayer *caLayer;
@property (nonatomic) long long column;
@property (weak, nonatomic) id<HKGraphTileDrawingDelegate> drawingDelegate;
@property (nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL tileDisplayedSinceSetNeedsDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setNeedsDisplay;
- (void)dealloc;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)initWithParentView:(id)a0;
- (void)configureTileWithScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 column:(long long)a1;

@end
