@class NSString, NSMutableArray;

@interface UIPointerInteractionAnimator : NSObject <UIPointerInteractionAnimating>

@property (copy, nonatomic) NSString *debugName;
@property (retain, nonatomic) NSMutableArray *animations;
@property (retain, nonatomic) NSMutableArray *completions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAnimations:(id /* block */)a0;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)performAllCompletions:(BOOL)a0;
- (void)performAllAnimations;

@end
