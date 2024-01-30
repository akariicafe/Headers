@class NSString, CABackdropLayer;

@interface _UIBackdropEffectView : UIView <CABackdropLayerDelegate>

@property (retain, nonatomic) CABackdropLayer *backdropLayer;
@property (nonatomic) double zoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)setContentScaleFactor:(double)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
