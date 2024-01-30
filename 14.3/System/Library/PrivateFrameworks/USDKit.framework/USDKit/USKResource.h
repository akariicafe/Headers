@interface USKResource : NSObject {
    struct shared_ptr<pxrInternal_v0_20__pxrReserved__usdkit__::ArAsset> { struct ArAsset *__ptr_; struct __shared_weak_count *__cntrl_; } _asset;
    struct shared_ptr<const char> { char *__ptr_; struct __shared_weak_count *__cntrl_; } _buffer;
    long long _length;
}

+ (id)resourceWithResourcePath:(id)a0;
+ (id)resourceWithPath:(id)a0;
+ (id)resourceWithURL:(id)a0;
+ (id)resourceWithUSKScene:(id)a0 path:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)dataNoCopy;

@end
