@class NSDictionary;

@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor

@property (retain, nonatomic) NSDictionary *dictionaryKeyedByPrimaryState;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)iconDescriptorForPrimaryState:(long long)a0;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)a0;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)a0 defaultImageIdentifier:(id)a1;
- (id)initWithSymbolIconConfigurationsKeyedByPrimaryState:(id)a0;
- (id)initWithSymbolIconConfigurationsKeyedByPrimaryState:(id)a0 defaultPrimaryState:(long long)a1;
- (id)initWithSymbolIconConfigurationsKeyedByPrimaryState:(id)a0 defaultSymbolIconConfiguration:(id)a1;

@end
