@interface VNImageTensorDescriptor : VNTensorDescriptor

@property (readonly, nonatomic) unsigned int pixelFormatType;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) unsigned long long bytesPerRow;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithName:(id)a0 pixelFormatType:(unsigned int)a1 pixelWidth:(unsigned long long)a2 pixelHeight:(unsigned long long)a3;

@end
