@class NSString, CAShapeLayer;

@interface _UIStatusBarActivityIconView : _UIStatusBarImageView <_UIStatusBarPersistentAnimation> {
    BOOL _ringing;
    double _ringingIconScale;
}

@property (retain, nonatomic) CAShapeLayer *innerRingShapeLayer;
@property (retain, nonatomic) CAShapeLayer *outerRingShapeLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyStyleAttributes:(id)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)_setupRingingLayersForStyleAttributes:(id)a0;
- (void)setRinging:(BOOL)a0 forUpdate:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)resumePersistentAnimation;
- (void)_teardownRingingLayers;

@end
