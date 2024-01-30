@class UIView, NSString, _UIHighlightPlatterView, UITargetedPreview, NSMutableArray;
@protocol _UIContentEffectDescriptor;

@interface _UIWindowSceneActivationEffect : NSObject <_UIContentEffect>

@property (readonly, nonatomic) NSMutableArray *completions;
@property (retain, nonatomic) _UIHighlightPlatterView *platterView;
@property (nonatomic) long long state;
@property (nonatomic) double currentScale;
@property (readonly, nonatomic) UITargetedPreview *handOffPreview;
@property (readonly, nonatomic) UIView *platterContainer;
@property (readonly, nonatomic) id<_UIContentEffectDescriptor> descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)begin;
- (id)initWithDescriptor:(id)a0;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_shadowBehavior;
- (void)advanceToScale:(double)a0;
- (id)_interactiveScaleBehavior;
- (void)_performAllCompletionBlocks;
- (id)_settlingBehavior;
- (void)endExpanded:(BOOL)a0 withVelocity:(double)a1;
- (id)previewForContinuingToEffectWithPreview:(id)a0;
- (void)setDescriptor:(id)a0 andKey:(id)a1;

@end
