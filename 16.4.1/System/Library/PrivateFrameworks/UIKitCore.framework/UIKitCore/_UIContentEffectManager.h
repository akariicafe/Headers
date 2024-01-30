@class NSMutableDictionary;

@interface _UIContentEffectManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *effects;

+ (id)sharedManager;

- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (void)_stopManagingEffect:(id)a0;
- (id)compatibleEffectForDescriptor:(id)a0;
- (id)compatibleEffectForKey:(id)a0 descriptor:(id)a1 constructor:(id /* block */)a2;

@end
