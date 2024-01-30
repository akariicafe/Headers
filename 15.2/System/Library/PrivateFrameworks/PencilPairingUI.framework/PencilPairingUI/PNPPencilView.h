@class PNPDeviceState, NSString, UIImageView, _PNPPencilMovieView, UIView;
@protocol PNPPencilViewDelegate;

@interface PNPPencilView : UIView <PNPPencilInteractionEventDestination, PNPDeviceStateConfigurable> {
    UIImageView *_pencilImageView;
    _PNPPencilMovieView *_pencilMovieView;
    UIView *_touchIndicatorView;
    BOOL _touchIndicatorShown;
    double _touchIndicatorPosition;
    unsigned long long _variant;
}

@property (weak, nonatomic) id<PNPPencilViewDelegate> delegate;
@property (nonatomic) BOOL spinning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) PNPDeviceState *deviceState;

+ (id)_hardwareImageForVariant:(unsigned long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithVariant:(unsigned long long)a0;
- (void)eventSource:(id)a0 hadPencilDoubleTapped:(id /* block */)a1;
- (void)_resetTouchIndicatorPosition;
- (void)_animateIndicatorToShown:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (struct CGSize { double x0; double x1; })_edgeAccurateSizeForLength:(double)a0 depth:(double)a1 deviceState:(id)a2;
- (struct CGSize { double x0; double x1; })intrinsicSizeForDeviceState:(id)a0;
- (void)completeRevolutionWithCompletionBlock:(id /* block */)a0;
- (void)_prepareMovieView;
- (struct CGSize { double x0; double x1; })comfortableContainingSizeForDeviceState:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForDeviceState:(id)a0;
- (void)cleanupSpinningResources;
- (void)prepareMovieForSpinningPencil;

@end
