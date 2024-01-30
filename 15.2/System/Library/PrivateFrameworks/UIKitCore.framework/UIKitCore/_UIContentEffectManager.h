@class NSMutableDictionary;

@interface _UIContentEffectManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *effects;

+ (id)sharedManager;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;
- (id)compatibleEffectForDescriptor:(id)a0;
- (id)compatibleEffectForKey:(id)a0 descriptor:(id)a1 constructor:(id /* block */)a2;
- (void)_stopManagingEffect:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;

@end
