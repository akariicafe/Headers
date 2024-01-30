@class ISImageCache, ISBundle;

@interface ISBundleIcon : ISIcon

@property (readonly) ISBundle *bundle;
@property (retain) ISImageCache *imageCache;

- (id)imageForImageDescriptor:(id)a0;
- (void).cxx_destruct;
- (struct CGImage { } *)CGImageForImageDescriptor:(id)a0;
- (id)initWithURL:(id)a0;
- (void)getCGImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)prepareImagesForImageDescriptors:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;

@end
