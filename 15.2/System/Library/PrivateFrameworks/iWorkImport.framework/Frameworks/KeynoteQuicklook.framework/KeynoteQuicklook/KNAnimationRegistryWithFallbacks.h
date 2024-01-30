@class KNAnimationRegistry, NSMutableDictionary;

@interface KNAnimationRegistryWithFallbacks : NSObject {
    KNAnimationRegistry *_registry;
    NSMutableDictionary *_fallbacks;
}

- (void).cxx_destruct;
- (id)init;
- (id)animationInfoForEffectIdentifier:(id)a0 animationType:(long long)a1;
- (void)registerFallbackEffectIdentifer:(id)a0 forEffectIdentifer:(id)a1;

@end
