@protocol FCCoreConfigurationManager;

@interface FCCoreConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;

- (id)initWithConfigurationManager:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)inputManagers;
- (id)fastCachedValue;

@end
