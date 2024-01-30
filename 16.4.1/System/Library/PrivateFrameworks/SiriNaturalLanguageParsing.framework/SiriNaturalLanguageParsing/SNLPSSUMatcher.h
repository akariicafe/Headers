@class NSURL;

@interface SNLPSSUMatcher : NSObject {
    struct unique_ptr<snlp::ssu::matcher::SSUMatcher, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { struct __compressed_pair<snlp::ssu::matcher::SSUMatcher *, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { struct SSUMatcher *__value_; } __ptr_; } _cppMatcher;
}

@property (readonly) NSURL *cacheDirectoryURL;

+ (id)matcherWithDirectories:(id)a0 initialApplicationInfos:(id)a1 initializeModelsPreemptively:(BOOL)a2 error:(id *)a3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithCacheDirectoryURL:(id)a0 cppMatcher:(struct unique_ptr<snlp::ssu::matcher::SSUMatcher, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { struct __compressed_pair<snlp::ssu::matcher::SSUMatcher *, std::default_delete<snlp::ssu::matcher::SSUMatcher>> { struct SSUMatcher *x0; } x0; })a1;
- (BOOL)deregisterApp:(id)a0 error:(id *)a1;
- (BOOL)performFullCacheUpdate:(id *)a0;
- (BOOL)registerApp:(id)a0 error:(id *)a1;
- (id)responseForRequest:(id)a0 error:(id *)a1;

@end
