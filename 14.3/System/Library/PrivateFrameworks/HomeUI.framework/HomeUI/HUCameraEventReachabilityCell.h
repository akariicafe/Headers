@class HFCameraScrubberReachabilityEventContainer, CALayer;

@interface HUCameraEventReachabilityCell : UICollectionViewCell

@property (nonatomic) unsigned long long displayMode;
@property (retain, nonatomic) HFCameraScrubberReachabilityEventContainer *reachabilityEvent;
@property (retain, nonatomic) CALayer *badgeLayer;
@property (nonatomic) BOOL needsFullDashedLineWidth;

+ (id)backgroundColor;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithReachabilityEventContainer:(id)a0 mode:(unsigned long long)a1;

@end
