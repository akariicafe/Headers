@class UIColor;

@interface VideosExtrasBorderedImageView : UIImageView

@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } deferredTransform;
@property (nonatomic) BOOL shouldDeferSettingTransform;
@property (nonatomic) BOOL shouldUseTransformWhenReplicatingState;
@property (nonatomic) BOOL shouldSkipImageWhenReplicatingState;
@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;

- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)replicateStateFromImageView:(id)a0;

@end
