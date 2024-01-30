@class NSDictionary;

@interface PVEffectRegistryEntry : NSObject {
    Class _effectClass;
    NSDictionary *_effectProperties;
}

- (void).cxx_destruct;
- (oneway void)dealloc;
- (id)effectProperties;
- (id)initWithClass:(Class)a0 andProperties:(id)a1;
- (Class)effectClass;

@end
