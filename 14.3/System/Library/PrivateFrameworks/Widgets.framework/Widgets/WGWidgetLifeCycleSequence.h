@class NSString;

@interface WGWidgetLifeCycleSequence : NSObject

@property (nonatomic, setter=_setCurrentState:) long long currentState;
@property (retain, nonatomic, getter=_previousSequence, setter=_setPreviousSequence:) WGWidgetLifeCycleSequence *previousSequence;
@property (readonly, copy, nonatomic) NSString *sequenceIdentifier;

- (id)transitionToState:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isCurrentState:(long long)a0;
- (id)sequenceWithIdentifier:(id)a0;
- (BOOL)isCurrentStateAtLeast:(long long)a0;
- (BOOL)isCurrentStateAtMost:(long long)a0;
- (id)description;
- (id /* block */)beginTransitionToState:(long long)a0 error:(id *)a1;
- (BOOL)_isValidTransitionToState:(long long)a0;
- (BOOL)isCurrentStateNotYet:(long long)a0;
- (id)initWithSequenceIdentifier:(id)a0;

@end
