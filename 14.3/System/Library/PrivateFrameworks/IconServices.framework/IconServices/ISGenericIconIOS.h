@class ISImageCache;

@interface ISGenericIconIOS : ISIcon

@property (retain) ISImageCache *imageCache;

- (id)imageForImageDescriptor:(id)a0;
- (void).cxx_destruct;
- (struct CGImage { } *)CGImageForImageDescriptor:(id)a0;
- (id)_prepareImageForImageDescriptor:(id)a0;
- (id)prepareImageForDescriptor:(id)a0;
- (id)_init;
- (void)getCGImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)prepareImagesForImageDescriptors:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;

@end
