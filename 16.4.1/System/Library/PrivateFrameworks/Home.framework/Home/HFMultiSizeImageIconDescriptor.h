@class NSDictionary;

@interface HFMultiSizeImageIconDescriptor : HFImageIconDescriptor

@property (retain, nonatomic) NSDictionary *imageIdentifiersKeyedBySize;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)imageIdentifierForSize:(id)a0;
- (id)initWithImageIdentifiersKeyedBySize:(id)a0;
- (id)initWithImageIdentifiersKeyedBySize:(id)a0 defaultImageIdentifier:(id)a1;

@end
