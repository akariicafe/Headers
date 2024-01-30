@interface SKTextureCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
}

@property (nonatomic) unsigned int textureFormat;
@property (nonatomic) struct shared_ptr<jet_texture> { struct jet_texture *__ptr_; struct __shared_weak_count *__cntrl_; } backingTexture;
@property (nonatomic) long long filteringMode;
@property (nonatomic) int wrapMode;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (nonatomic) BOOL hasAlpha;
@property (nonatomic) BOOL isPOT;
@property (nonatomic) char *pixelData;
@property (nonatomic) int state;
@property (readonly, nonatomic, getter=getLock) struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } *lock;

- (void)_reset;
- (id).cxx_construct;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
