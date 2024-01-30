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

- (void)addCompletion:(id /* block */)a0;
- (id)_shadowBehavior;
- (id)_settlingBehavior;
- (id)_interactiveScaleBehavior;
- (void)_performAllCompletionBlocks;
- (void)setDescriptor:(id)a0 andKey:(id)a1;
- (void)begin;
- (void).cxx_destruct;
- (void)advanceToScale:(double)a0;
- (id)previewForContinuingToEffectWithPreview:(id)a0;
- (void)endExpanded:(BOOL)a0 withVelocity:(double)a1;
- (id)initWithDescriptor:(id)a0;

@end
