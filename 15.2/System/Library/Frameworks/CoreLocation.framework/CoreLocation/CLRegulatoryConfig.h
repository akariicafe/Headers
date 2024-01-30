@interface CLRegulatoryConfig : NSObject {
    struct unique_ptr<CLRegulatoryConfigInternal, std::default_delete<CLRegulatoryConfigInternal>> { struct __compressed_pair<CLRegulatoryConfigInternal *, std::default_delete<CLRegulatoryConfigInternal>> { struct CLRegulatoryConfigInternal *__value_; } __ptr_; } _config;
}

- (BOOL)addConfigForIsoList:(id)a0 config:(id)a1 error:(id *)a2;
- (BOOL)addConfigForRegionList:(id)a0 config:(id)a1 error:(id *)a2;
- (id)initWithQueue:(id)a0 defaultConfig:(id)a1;
- (void)fetchConfigForLocation:(id)a0 withReply:(id /* block */)a1;
- (void)fetchInfoForLocation:(id)a0 withReply:(id /* block */)a1;
- (BOOL)setExtendedBorderDetection:(BOOL)a0 withExtendedDistance:(int)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
