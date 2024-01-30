@class _UIGravityWellEffectBody, NSArray, NSString, UITargetedPreview, NSMutableArray;
@protocol _UIContentEffectDescriptor;

@interface _UIGravityWellEffect : NSObject <_UIContentEffect>

@property (retain, nonatomic) UITargetedPreview *continuationPreview;
@property (retain, nonatomic) _UIGravityWellEffectBody *primaryBody;
@property (retain, nonatomic) NSArray *secondaryBodies;
@property (readonly, nonatomic) NSMutableArray *completions;
@property (nonatomic) unsigned long long animationCount;
@property (nonatomic) double effectProgress;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSArray *secondaryBodyPreviews;
@property (readonly, nonatomic) id<_UIContentEffectDescriptor> descriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectWithDescriptor:(id)a0 continuationPreview:(id)a1;

- (void)begin;
- (void)end;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_effectSpringBehavior;
- (void)_installEffectViews;
- (void)_performAllCompletions;
- (void)_tearDownEffectViews;
- (void)_updateToProgress:(double)a0 state:(long long)a1;
- (void)endForHandOff;
- (id)previewForContinuingToEffectWithPreview:(id)a0;
- (void)setDescriptor:(id)a0 andKey:(id)a1;
- (void)updateWithProgress:(double)a0;

@end
