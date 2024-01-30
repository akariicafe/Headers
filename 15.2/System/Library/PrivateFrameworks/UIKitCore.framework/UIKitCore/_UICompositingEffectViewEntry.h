@class NSString;

@interface _UICompositingEffectViewEntry : _UIVisualEffectViewEntry

@property (copy, nonatomic) NSString *filterType;

- (void)addEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (BOOL)isSameTypeOfEffect:(id)a0;
- (id)description;
- (BOOL)canTransitionToEffect:(id)a0;
- (void).cxx_destruct;

@end
