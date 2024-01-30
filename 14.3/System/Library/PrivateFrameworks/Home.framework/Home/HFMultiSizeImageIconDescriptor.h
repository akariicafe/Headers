@class NSDictionary;

@interface HFMultiSizeImageIconDescriptor : HFImageIconDescriptor

@property (retain, nonatomic) NSDictionary *imageIdentifiersKeyedBySize;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithImageIdentifiersKeyedBySize:(id)a0;
- (id)initWithImageIdentifiersKeyedBySize:(id)a0 defaultImageIdentifier:(id)a1;
- (id)imageIdentifierForSize:(id)a0;

@end
