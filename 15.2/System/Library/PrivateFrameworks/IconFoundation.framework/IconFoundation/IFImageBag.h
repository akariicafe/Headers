@class NSArray, NSMutableDictionary;

@interface IFImageBag : NSObject

@property (retain) NSMutableDictionary *imagesByScale;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, copy) NSArray *images;

+ (id)imageBagWithResourcesNamed:(id)a0 fromBundle:(id)a1;
+ (id)imageBagWithResourcesNames:(id)a0 fromBundle:(id)a1;
+ (id)imageBagWithResourcesNamed:(id)a0 fromBundle:(id)a1 subdirectory:(id)a2;
+ (id)imageBagWithResourcesNamed:(id)a0 directory:(id)a1;

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithImages:(id)a0;
- (void)insertImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)images;
- (id)imagesForScale:(double)a0;
- (id)debugDescription;

@end
