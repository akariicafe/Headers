@class NSURL;

@interface PHASEDataBundleAsset : PHASEAsset {
    struct unique_ptr<Phase::DataBundle, std::default_delete<Phase::DataBundle>> { struct __compressed_pair<Phase::DataBundle *, std::default_delete<Phase::DataBundle>> { struct DataBundle *__value_; } __ptr_; } _dataBundle;
}

@property (readonly) NSURL *url;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1;
- (id)initWithURL:(id)a0 uid:(id)a1 dataBundle:(struct unique_ptr<Phase::DataBundle, std::default_delete<Phase::DataBundle>> { struct __compressed_pair<Phase::DataBundle *, std::default_delete<Phase::DataBundle>> { struct DataBundle *x0; } x0; })a2 assetRegistry:(id)a3;
- (const void *)getDataBundle;

@end
