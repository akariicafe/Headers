@class NSString, CAGradientLayer, CAShapeLayer;
@protocol InfoDiagramCablingAnchorDelegate;

@interface InfoDiagramCablingLayer : CALayer <CALayerDelegate>

@property (nonatomic) id<InfoDiagramCablingAnchorDelegate> diagramAnchorPointDelegate;
@property (nonatomic) BOOL swapCabling;
@property (nonatomic) BOOL isCompactWidth;
@property (retain, nonatomic) CAShapeLayer *internetInnerLineLayer;
@property (retain, nonatomic) CAShapeLayer *internetOuterLineLayer;
@property (retain, nonatomic) CAGradientLayer *internetGradientLayer;
@property (retain, nonatomic) CAShapeLayer *broadbandToWANInnerLineLayer;
@property (retain, nonatomic) CAShapeLayer *broadbandToWANOuterLineLayer;
@property (retain, nonatomic) CAShapeLayer *swapArcLineLayer;
@property (retain, nonatomic) CAShapeLayer *swapArcArrowLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSublayers;
- (void)commonInit;
- (void)dealloc;
- (id)initNoWANLinkFirstFrame;
- (id)initNoWANLinkLastFrame;
- (void)createPathForSublayer:(id)a0;

@end
