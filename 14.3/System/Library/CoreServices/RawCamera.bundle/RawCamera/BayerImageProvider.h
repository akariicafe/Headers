@interface BayerImageProvider : NSObject {
    struct shared_ptr<CRawImage> { struct CRawImage *__ptr_; struct __shared_weak_count *__cntrl_; } image;
    struct weak_ptr<CRawImage> { struct CRawImage *__ptr_; struct __shared_weak_count *__cntrl_; } imageWeak;
    BOOL _retainedImage;
}

- (id)init;
- (void).cxx_destruct;
- (void)provideImageData:(void *)a0 bytesPerRow:(unsigned long long)a1 origin:(unsigned long long)a2 :(unsigned long long)a3 size:(unsigned long long)a4 :(unsigned long long)a5 userInfo:(id)a6;
- (id).cxx_construct;
- (id)initWithRawImage:(struct shared_ptr<CRawImage> { struct CRawImage *x0; struct __shared_weak_count *x1; })a0 shouldRetainRawImage:(BOOL)a1;

@end
