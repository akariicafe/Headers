@class CABackdropLayer;

@interface BSUIVibrancyBackdropView : UIView

@property (readonly, nonatomic) CABackdropLayer *backdropLayer;

+ (Class)layerClass;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;

@end
