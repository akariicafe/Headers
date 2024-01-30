@class BSUIAnimationFactory, UIView;

@interface SBCrossfadeView : UIView {
    UIView *_startView;
    UIView *_endView;
    BOOL _translucent;
    BOOL _crossfaded;
}

@property (retain, nonatomic) BSUIAnimationFactory *animationFactory;
@property (nonatomic) BOOL allowsGroupOpacityDuringCrossfade;
@property (nonatomic) BOOL adaptsAnimationFactoryTimingFunction;

+ (id)crossfadeViewWithStartView:(id)a0 endView:(id)a1 translucent:(BOOL)a2;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)layoutSubviews;
- (id)_initWithStartView:(id)a0 endView:(id)a1 translucent:(BOOL)a2;
- (void)crossfadeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
