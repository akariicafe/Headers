@class NSMutableArray;

@interface PUAnimationGroup : NSObject

@property (weak, nonatomic) PUAnimationGroup *superAnimationGroup;
@property (readonly, nonatomic) NSMutableArray *subAnimationGroups;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic, getter=isReadyToComplete) BOOL readyToComplete;
@property (nonatomic) double elapsedTime;
@property (nonatomic, getter=isPaused) BOOL paused;

+ (id)animationGroupWithAnimations:(id /* block */)a0;
+ (void)popAnimationGroup:(id)a0;
+ (void)pushAnimationGroup:(id)a0;

- (void)complete;
- (void)dealloc;
- (void)finishImmediately;
- (id)description;
- (void).cxx_destruct;
- (void)pauseAnimations;
- (void)addSubAnimationGroup:(id)a0;
- (void)completeIfNeeded;
- (void)resumeAnimations;

@end
