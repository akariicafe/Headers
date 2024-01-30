@class NSString, CAShapeLayer;

@interface NetTopoDeviceConnectionLayer : NetTopoObjectLayer <CALayerDelegate> {
    CAShapeLayer *_connectionLineLayer;
    struct CGColor { } *_lineColorActive;
    struct CGColor { } *_lineColorInactive;
    struct CGColor { } *_lineColorEthernet;
    struct CGColor { } *_lineColorWiFi;
    struct CGColor { } *_selectedLineColor;
    struct CGColor { } *_clearColor;
    struct CGColor { } *_whiteColor;
    struct CGPoint { double x; double y; } _upstreamConnectionPoint;
    struct CGPoint { double x; double y; } _downstreamConnectionPoint;
    struct CGPoint { double x; double y; } _siblingMergePoint;
    struct CGPath { } *_arrowhead;
}

@property (nonatomic) unsigned long long upstreamDeviceSpatialRelationship;
@property (nonatomic) unsigned long long connectionStyle;
@property (readonly, nonatomic) unsigned long long connectionMedium;
@property (nonatomic) unsigned long long connectionMediumFallback;
@property (nonatomic) struct CGPoint { double x0; double x1; } upstreamConnectionPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } downstreamConnectionPoint;
@property (nonatomic) unsigned long long upstreamConnectionSide;
@property (nonatomic) struct CGPoint { double x0; double x1; } siblingMergePoint;
@property (readonly, nonatomic) struct CGPath { } *hitTestPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSublayers;
- (void)dealloc;
- (void)setSelected:(BOOL)a0;
- (void)setNeedsDisplay;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)describeOne:(id)a0 uiLayer:(id)a1 indent:(unsigned long long)a2;
- (id)initWithUIStyle:(int)a0 andOwningView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getUserInteractionBounds;
- (void)initNetTopoDeviceConnectionLayerCommonWithStyle:(int)a0 andOwningView:(id)a1;
- (void)addBottomWindingConnectionToPath:(struct CGPath { } *)a0 withOffset:(double)a1;
- (void)addSideWindingConnectionToPath:(struct CGPath { } *)a0 withOffset:(double)a1;
- (void)addCurvedArrowConnectionToPath:(struct CGPath { } *)a0 withOffset:(double)a1;
- (struct CGPath { } *)newConnectionPathWithOffset:(double)a0;

@end
