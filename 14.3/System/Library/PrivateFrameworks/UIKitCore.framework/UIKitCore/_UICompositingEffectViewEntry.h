@class NSString;

@interface _UICompositingEffectViewEntry : _UIVisualEffectViewEntry

@property (copy, nonatomic) NSString *filterType;

- (void)removeEffectFromView:(id)a0;
- (BOOL)canTransitionToEffect:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSameTypeOfEffect:(id)a0;
- (id)description;
- (void)addEffectToView:(id)a0;

@end
