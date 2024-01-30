@class NSDictionary;

@interface PVEffectRegistryEntry : NSObject {
    Class _effectClass;
    NSDictionary *_effectProperties;
}

- (oneway void)dealloc;
- (void).cxx_destruct;
- (Class)effectClass;
- (id)effectProperties;
- (id)initWithClass:(Class)a0 andProperties:(id)a1;

@end
