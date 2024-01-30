@interface VNModelFilesCache : NSObject {
    struct unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache> > { struct __compressed_pair<cvml::util::model_file_cache *, std::__1::default_delete<cvml::util::model_file_cache> > { struct model_file_cache *__value_; } __ptr_; } m_impl;
}

+ (id)sharedInstance;
+ (BOOL)useFOpenForModelWithPath:(id)a0;

- (id)load:(id)a0;
- (void)purgeAll;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)unload:(id)a0;

@end
