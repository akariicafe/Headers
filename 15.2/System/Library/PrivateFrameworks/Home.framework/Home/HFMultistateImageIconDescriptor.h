@class NSDictionary;

@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor

@property (retain, nonatomic) NSDictionary *imageIdentifiersKeyedByPrimaryState;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)a0 defaultImageIdentifier:(id)a1;
- (id)initWithImageIdentifiersKeyedByPrimaryState:(id)a0;
- (id)imageIdentifierForPrimaryState:(long long)a0;

@end
