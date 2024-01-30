@class NSSet, NSString, _UIStatusBarIdentifier, NSMutableArray;

@interface _UIStatusBarAnimation : NSObject <NSCopying, _UIStatusBarPrioritized>

@property (retain, nonatomic) NSMutableArray *subAnimations;
@property (weak, nonatomic) _UIStatusBarAnimation *parentAnimation;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ animationBlock;
@property (copy, nonatomic) id /* block */ timeoutBlock;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long type;
@property (readonly, nonatomic) NSSet *effectiveDelayedItemIdentifiers;
@property (copy, nonatomic) _UIStatusBarIdentifier *displayItemIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *exclusivityGroupIdentifier;
@property (copy, nonatomic) id /* block */ prepareBlock;
@property (copy, nonatomic) NSSet *delayedItemIdentifiers;
@property (copy, nonatomic) NSSet *delayedDisplayItemPlacements;
@property (nonatomic) BOOL delaysAnimatingItems;
@property (nonatomic) BOOL delaysDependentItems;
@property (nonatomic) long long priority;

+ (void)initialize;
+ (void)_addAnimations:(id)a0 toPreparingAnimations:(id)a1 exclusiveAnimations:(id)a2 visitedDisplayItemIdentifiers:(id)a3;
+ (void)prepareAnimations:(id)a0 forStatusBar:(id)a1;
+ (id)animationWithBlock:(id /* block */)a0;
+ (void)_addAnimations:(id)a0 toDispatchGroup:(id)a1;

- (void)addCompletionHandler:(id /* block */)a0;
- (void)addSubAnimation:(id)a0 forDisplayItemWithIdentifier:(id)a1;
- (void)addTimeout:(double)a0 withHandler:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancel;
- (void)_prepareForStatusBar:(id)a0 preparingAnimations:(id)a1 exclusiveAnimations:(id)a2;
- (id)_dependentItemIdentifiersEnabledOnly:(BOOL)a0;
- (id)description;
- (void)addTotalCompletionHandler:(id /* block */)a0;
- (void)performForStatusBar:(id)a0;
- (void).cxx_destruct;

@end
