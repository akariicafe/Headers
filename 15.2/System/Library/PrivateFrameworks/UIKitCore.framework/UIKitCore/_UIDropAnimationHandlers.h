@class NSArray, NSString, NSMutableArray;

@interface _UIDropAnimationHandlers : NSObject <UIDragAnimating> {
    NSMutableArray *_alongsideAnimationHandlers;
    NSMutableArray *_completionHandlers;
}

@property (readonly, nonatomic) NSArray *alongsideAnimationHandlers;
@property (readonly, nonatomic) NSArray *completionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAnimations:(id /* block */)a0;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invokeAllCompletionHandlers;
- (void)resetAllAnimationHandlers;

@end
