@interface MTLFXSpatialScalerDescriptor : NSObject

@property unsigned long long version;
@property (nonatomic) unsigned long long colorTextureFormat;
@property (nonatomic) unsigned long long outputTextureFormat;
@property (nonatomic) unsigned long long inputWidth;
@property (nonatomic) unsigned long long inputHeight;
@property (nonatomic) unsigned long long outputWidth;
@property (nonatomic) unsigned long long outputHeight;
@property (nonatomic) long long colorProcessingMode;

+ (BOOL)supportsDevice:(id)a0;
+ (unsigned long long)colorTextureUsage;
+ (unsigned long long)inputTextureUsage;
+ (unsigned long long)outputTextureUsage;

- (unsigned long long)getInputTextureFormat;
- (id)newSpatialScalerWithDevice:(id)a0;
- (void)setInputTextureFormat:(unsigned long long)a0;

@end
