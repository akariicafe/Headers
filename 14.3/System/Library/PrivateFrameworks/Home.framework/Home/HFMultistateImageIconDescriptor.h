@class NSDictionary;

@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor

@property (retain, nonatomic) NSDictionary *imageIdentifiersKeyedByPrimaryState;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)imageIdentifierForPrimaryState:(long long)a0;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)a0 defaultImageIdentifier:(id)a1;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)a0;

@end
