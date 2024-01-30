@interface SHSSpeakersPrefController : PSListController

+ (BOOL)isVisible;

- (id)init;
- (void)dealloc;
- (id)specifiers;
- (void)update;
- (void)setEQIndex:(id)a0 specifier:(id)a1;
- (id)eqIndex:(id)a0;

@end
