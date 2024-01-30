@class NSSet, NSMutableDictionary, NSArray;

@interface TSCH3DShaderEffects : NSObject <NSCopying> {
    NSMutableDictionary *_sections;
    NSArray *_cacheList;
}

@property (readonly, nonatomic) NSSet *identifier;

- (id)effects;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)addVariables:(id)a0;
- (void)addEffect:(id)a0;
- (void)resetToArray:(id)a0;
- (void)addEffectOnce:(id)a0 toSection:(int)a1;
- (void)addEffect:(id)a0 toSection:(int)a1;
- (void)addEffectsFromArray:(id)a0 toSection:(int)a1;
- (void)prependEffect:(id)a0 toSection:(int)a1;
- (void)injectGLSLInto:(id)a0 context:(id)a1;
- (void)injectMetalShaderInto:(id)a0 context:(id)a1;
- (void)removeEffect:(id)a0 fromSection:(int)a1;
- (void)resetCacheList;
- (void)resetSection:(int)a0;
- (void)addEffectsFromArray:(id)a0;
- (void)prependEffect:(id)a0;
- (BOOL)removeEffectOfClass:(Class)a0 fromSection:(int)a1;
- (void)setEnable:(BOOL)a0 forSection:(int)a1;
- (BOOL)isSectionEnabled:(int)a0;
- (void)resetSection:(int)a0 toArray:(id)a1;
- (void)enumerateEffectsUsingBlock:(id /* block */)a0;

@end
