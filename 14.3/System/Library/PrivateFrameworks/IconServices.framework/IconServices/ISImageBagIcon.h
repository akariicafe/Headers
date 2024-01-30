@class ISImageCache, NSArray;

@interface ISImageBagIcon : ISIcon {
    NSArray *_decorations;
}

@property (retain) ISImageCache *imageCache;
@property (readonly) NSArray *images;

- (id)imageForImageDescriptor:(id)a0;
- (id)initWithImages:(id)a0;
- (void).cxx_destruct;
- (struct CGImage { } *)CGImageForImageDescriptor:(id)a0;
- (id)decorations;
- (id)initWithImages:(id)a0 decorations:(id)a1;
- (BOOL)hasValidImage;
- (void)getCGImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)prepareImagesForImageDescriptors:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;

@end
