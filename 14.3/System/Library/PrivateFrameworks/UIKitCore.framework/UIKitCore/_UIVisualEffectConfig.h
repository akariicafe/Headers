@class _UIVisualEffectLayerConfig, NSMutableArray;

@interface _UIVisualEffectConfig : NSObject

@property (readonly, nonatomic) NSMutableArray *layerConfigs;
@property (readonly, nonatomic) _UIVisualEffectLayerConfig *contentConfig;

+ (id)configWithContentConfig:(id)a0;
+ (id)configWithLayerConfigs:(id)a0;

- (void).cxx_destruct;
- (void)enumerateLayerConfigs:(id /* block */)a0;
- (void)addLayerConfig:(id)a0;
- (id)description;

@end
