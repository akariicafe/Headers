@class NSString;

@interface _UICompositingEffectViewEntry : _UIVisualEffectViewEntry

@property (copy, nonatomic) NSString *filterType;

- (BOOL)canTransitionToEffect:(id)a0;
- (BOOL)isSameTypeOfEffect:(id)a0;
- (void)addEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
