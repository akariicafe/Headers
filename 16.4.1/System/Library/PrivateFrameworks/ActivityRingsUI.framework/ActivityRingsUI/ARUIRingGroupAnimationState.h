@class CAMediaTimingFunction, NSString, NSMutableSet;

@interface ARUIRingGroupAnimationState : NSObject <ARUIRingGroupAnimationDelegate>

@property (retain, nonatomic) ARUIRingGroupAnimationState *nextAnimationState;
@property (retain, nonatomic) NSMutableSet *trackedAnimations;
@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)popAnimationState;
+ (id)currentAnimationState;
+ (void)pushAnimationState:(id)a0;

@end
