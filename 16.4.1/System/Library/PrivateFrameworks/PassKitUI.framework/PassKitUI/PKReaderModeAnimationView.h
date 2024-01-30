@class CAPackage, CALayer, CAStateController;

@interface PKReaderModeAnimationView : UIView {
    unsigned long long _state;
    CAPackage *_package;
    CALayer *_phoneLayer;
    CAStateController *_stateController;
    BOOL _isPhoneTarget;
}

@property (nonatomic) unsigned long long state;

- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setDigitalCardImage:(id)a0;
- (void)setPlasticCardImage:(id)a0;
- (void)_setState:(unsigned long long)a0 animated:(BOOL)a1;
- (unsigned long long)animationStateForProvisioningViewState:(unsigned long long)a0;
- (id)initWithAssetName:(id)a0 forPhoneTarget:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 assetName:(id)a1 forPhoneTarget:(BOOL)a2;
- (void)setImage:(id)a0 forPublishedObjectWithName:(id)a1;
- (void)setWatchAssetImage:(id)a0;

@end
