@class NSArray, LSResourceProxy;

@interface ISIconIOS : ISIcon

@property (retain) LSResourceProxy *resourceProxy;
@property (copy, nonatomic) NSArray *decorations;

+ (id)backgroundQueue;

- (id)imageForImageDescriptor:(id)a0;
- (double)_aspectRatio;
- (void)_prepareImageForSymbolImageDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)_prepareImageForImageDescriptor:(id)a0 allowIO:(BOOL)a1;
- (id)_cachedImageForDescriptor:(id)a0;
- (id)imageForDescriptor:(id)a0;
- (struct CGImage { } *)CGImageForImageDescriptor:(id)a0;
- (int)variantForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(unsigned long long)a2;
- (unsigned long long)hash;
- (id)initWithResourceProxy:(id)a0 decorations:(id)a1;
- (id)initWithType:(id)a0;
- (id)initWithResourceProxy:(id)a0;
- (id)initWithURL:(id)a0;
- (id)prepareImageForDescriptor:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)_imageForSymbolImageDescriptor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initTransparent;
- (void)prepareImagesForDescriptors:(id)a0;
- (void)getCGImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)prepareImagesForImageDescriptors:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (BOOL)isEqualToIcon:(id)a0;

@end
