@class _UIGravityWellAdaptorInteraction;
@protocol _UIClickHighlightEffect;

@interface _UIGravityWellAdaptorEffect : _UIGravityWellEffect

@property (retain, nonatomic) id<_UIClickHighlightEffect> adaptedEffect;
@property (retain, nonatomic) _UIGravityWellAdaptorInteraction *adaptorInteraction;
@property (nonatomic) double maxProgress;

+ (id)effectWithAdaptedClickEffect:(id)a0;

- (void)begin;
- (void)end;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)endForHandOff;
- (id)previewForContinuingToEffectWithPreview:(id)a0;
- (id)secondaryBodyPreviews;
- (void)updateWithProgress:(double)a0;

@end
