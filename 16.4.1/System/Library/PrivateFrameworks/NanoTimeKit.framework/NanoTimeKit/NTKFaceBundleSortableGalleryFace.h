@class NTKFace;

@interface NTKFaceBundleSortableGalleryFace : NSObject

@property (readonly, nonatomic) NTKFace *face;
@property (readonly, nonatomic) unsigned long long priority;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithFace:(id)a0 priority:(unsigned long long)a1;

@end
