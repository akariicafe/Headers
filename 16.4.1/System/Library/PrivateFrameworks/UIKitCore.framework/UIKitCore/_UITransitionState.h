@class NSDate;

@interface _UITransitionState : NSObject {
    id /* block */ _completion;
}

@property (readonly, nonatomic) long long transitionDirection;
@property (readonly, nonatomic) long long effectiveTransitionDirection;
@property (readonly, nonatomic) NSDate *beginDate;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (id)description;
- (void).cxx_destruct;
- (void)cleanupWithFinishedState:(BOOL)a0 completedState:(BOOL)a1;
- (id)initWithTransitionDirection:(long long)a0 completion:(id /* block */)a1;
- (BOOL)isCompatibleWithTransitionInDirection:(long long)a0;
- (void)markBeginDate;

@end
