@class NSString;

@interface SBInsertionDodgingModifier : SBDodgingModifier

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) struct CGPoint { double x; double y; } initialCenter;
@property (nonatomic) struct CGSize { double width; double height; } initialSize;
@property (nonatomic) unsigned long long phase;

- (void).cxx_destruct;
- (id)handleAnimationCompletionEvent:(id)a0;
- (id)_animationDidCompleteEventName;
- (id)_modelDidUpdateEventName;
- (long long)animationBehaviorModeForIdentifier:(id)a0;
- (id)framesForIdentifiers;
- (id)handleCustomEvent:(id)a0;
- (id)handleInsertionEvent:(id)a0;
- (id)initWithIdentifier:(id)a0 initialCenter:(struct CGPoint { double x0; double x1; })a1 initialSize:(struct CGSize { double x0; double x1; })a2;
- (id)modelForInvalidatedModel:(id)a0;

@end
