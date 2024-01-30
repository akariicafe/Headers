@interface MLUBlurryView : UIView {
    BOOL _hasActivated;
}

@property double blurRadius;
@property (nonatomic) BOOL shouldRasterizeForTransition;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_activateBlurring;

@end
