@protocol FCCoreConfigurationManager;

@interface FCCoreConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;

- (id)initWithConfigurationManager:(id)a0;
- (id)inputManagers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fastCachedValue;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;

@end
