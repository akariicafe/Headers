@class NSString, AUImageView, AULabel, UIView;

@interface InfoDiagramView : UIView <InfoDiagramCablingAnchorDelegate> {
    AUImageView *broadbandImageView;
    AULabel *broadbandLabel;
    AULabel *internetLabel;
    AULabel *portLabel;
    AUImageView *wanConnectedBaseImageView;
    AULabel *wanConnectedBaseLabel;
    AUImageView *replacementBaseImageView;
    AULabel *replacementBaseLabel;
    AUImageView *insetImageView;
    UIView *fixedCablingFrameView;
    UIView *animatingCablingFrameView;
    unsigned int wanBaseProductID;
    unsigned int replacementProductID;
    long long sizeClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (void)dealloc;
- (void)setWANConnectedBaseLabelString:(id)a0;
- (struct CGPoint { double x0; double x1; })broadbandInPoint;
- (struct CGPoint { double x0; double x1; })broadbandOutPoint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wanConnectedBaseProductID:(unsigned int)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 wanConnectedBaseProductID:(unsigned int)a1 replacementProductID:(unsigned int)a2;
- (struct CGPoint { double x0; double x1; })internetPoint;
- (void)startAnimatingCablingLayer;
- (void)stopAnimatingCablingLayer;
- (struct CGPoint { double x0; double x1; })swapArcControlPoint;
- (struct CGPoint { double x0; double x1; })swapArcControlPoint1;
- (struct CGPoint { double x0; double x1; })swapArcControlPoint2;
- (struct CGPoint { double x0; double x1; })swapArcLineEndPoint;
- (struct CGPoint { double x0; double x1; })swapArcLineStartPoint;
- (struct CGPoint { double x0; double x1; })wanConnectedBaseWANPoint;

@end
