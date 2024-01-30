@class NSObject;
@protocol OS_dispatch_queue;

@interface EMTTranslator : NSObject {
    struct shared_ptr<quasar::TranslatorFactory> { struct TranslatorFactory *__ptr_; struct __shared_weak_count *__cntrl_; } _translatorFactory;
    struct vector<quasar::SystemConfig, std::__1::allocator<quasar::SystemConfig> > { struct SystemConfig *__begin_; struct SystemConfig *__end_; struct __compressed_pair<quasar::SystemConfig *, std::__1::allocator<quasar::SystemConfig> > { struct SystemConfig *__value_; } __end_cap_; } _configs;
    NSObject<OS_dispatch_queue> *_translationQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithModelURL:(id)a0 task:(id)a1;
- (void)loadTranslatorFrom:(id)a0 to:(id)a1;
- (void)translateTokens:(id)a0 from:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (id)initWithModelURL:(id)a0;
- (id)initWithModelURLs:(id)a0 task:(id)a1;
- (void)translateSpeech:(id)a0 from:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (void)translateString:(id)a0 from:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x1; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; })_tokenizeString:(id)a0;
- (void)_translate:(struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x1; struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x2; })a0 from:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (void)translateSpeech:(id)a0 completion:(id /* block */)a1;
- (void)translateString:(id)a0 completion:(id /* block */)a1;

@end
