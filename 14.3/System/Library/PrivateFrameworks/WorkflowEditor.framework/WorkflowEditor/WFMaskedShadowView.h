@class UIColor, NSString, WFAction, CAShapeLayer;

@interface WFMaskedShadowView : UIView <WFActionEventObserver> {
    BOOL _attributesChanged;
    BOOL _actionRunning;
}

@property (nonatomic) long long mode;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIColor *runningShadowColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (weak, nonatomic) CAShapeLayer *borderLayer;
@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)attributesDidChange;
- (void)actionRunningStateDidChange:(id)a0;
- (void)applyAttributes;
- (void)updateShadowColorAnimated:(BOOL)a0;

@end
