@class NSMutableDictionary;

@interface ISImageCache : NSObject

@property struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain) NSMutableDictionary *imageBagsByDescriptor;

- (id)init;
- (void).cxx_destruct;
- (id)imageForDescriptor:(id)a0;
- (void)setImage:(id)a0 forDescriptor:(id)a1;
- (id)allImages;
- (id)debugDescription;

@end
