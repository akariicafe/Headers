@class NSString, NSMutableDictionary, NSArray;

@interface ISImageBag : NSObject <ISScalableCompositorResource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSMutableDictionary *imagesByScale;
@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, copy) NSArray *images;

+ (id)imageBagWithResourcesNamed:(id)a0 fromBundle:(id)a1;
+ (id)imageBagWithResourcesNames:(id)a0 fromBundle:(id)a1;
+ (id)imageBagWithResourcesNamed:(id)a0 fromBundle:(id)a1 subdirectory:(id)a2;
+ (id)imageBagWithResourcesNamed:(id)a0 directory:(id)a1;

- (void)insertImage:(id)a0;
- (id)initWithImages:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)imagesForScale:(double)a0;
- (id)images;

@end
