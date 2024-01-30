@class VNImageprint;

@interface VCPImageDescriptor : NSObject <VCPDistanceDescriptorProtocol> {
    VNImageprint *_imagePrint;
}

+ (BOOL)usePHAssetData;
+ (id)descriptorWithImage:(struct __CVBuffer { } *)a0;
+ (id)descriptorWithData:(id)a0;
+ (int)preferredPixelFormat;

- (id)initWithImage:(struct __CVBuffer { } *)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (int)computeDistance:(float *)a0 toDescriptor:(id)a1;

@end
