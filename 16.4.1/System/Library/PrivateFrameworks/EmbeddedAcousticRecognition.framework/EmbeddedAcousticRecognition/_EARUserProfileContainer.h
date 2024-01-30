@class NSData, NSString;

@interface _EARUserProfileContainer : NSObject {
    struct shared_ptr<std::ifstream> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _fstream;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    struct shared_ptr<quasar::LmeData> { struct LmeData *__ptr_; struct __shared_weak_count *__cntrl_; } _lmeData;
}

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *userId;

+ (void)initialize;

- (id).cxx_construct;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (struct shared_ptr<const quasar::LmeData> { struct LmeData *x0; struct __shared_weak_count *x1; })lmeData;
- (id)initWithPath:(id)a0 userId:(id)a1 recognitionOnly:(BOOL)a2 error:(id *)a3;
- (id)maskedUserIdWithMask:(id)a0;
- (struct shared_ptr<quasar::LmeContainer> { struct LmeContainer *x0; struct __shared_weak_count *x1; })quasarContainerWithUserIdMask:(id)a0;

@end
