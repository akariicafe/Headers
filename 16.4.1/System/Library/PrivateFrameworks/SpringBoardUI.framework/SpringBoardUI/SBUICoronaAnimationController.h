@class UIViewPropertyAnimator, NSHashTable;

@interface SBUICoronaAnimationController : NSObject {
    NSHashTable *_participants;
}

@property (retain, nonatomic, getter=_propertyAnimator, setter=_setPropertyAnimator:) UIViewPropertyAnimator *propertyAnimator;

+ (id)animationSettingsForTransitionToStyle:(long long)a0;

- (id)_configurePropertyAnimatorIfNecessaryForChangeToUserInterfaceStyle:(long long)a0;
- (void)coronaDidChange:(long long)a0;
- (void)addParticipant:(id)a0;
- (void)removeParticipant:(id)a0;
- (void).cxx_destruct;

@end
