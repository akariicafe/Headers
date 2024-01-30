@class NSDate;

@interface _UITransitionState : NSObject {
    id /* block */ _completion;
}

@property (readonly, nonatomic) long long transitionDirection;
@property (readonly, nonatomic) long long effectiveTransitionDirection;
@property (readonly, nonatomic) NSDate *beginDate;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void).cxx_destruct;
- (id)initWithTransitionDirection:(long long)a0 completion:(id /* block */)a1;
- (void)cleanupWithFinishedState:(BOOL)a0 completedState:(BOOL)a1;
- (BOOL)isCompatibleWithTransitionInDirection:(long long)a0;
- (id)description;
- (void)markBeginDate;

@end
