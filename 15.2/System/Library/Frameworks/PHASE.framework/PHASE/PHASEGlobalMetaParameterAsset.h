@interface PHASEGlobalMetaParameterAsset : PHASEAsset {
    const void *_metaParamReference;
    struct unique_ptr<Phase::MetaParameter, std::default_delete<Phase::MetaParameter>> { struct __compressed_pair<Phase::MetaParameter *, std::default_delete<Phase::MetaParameter>> { struct MetaParameter *__value_; } __ptr_; } _metaParamOwnedAsset;
}

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1;
- (id)initWithUID:(id)a0 metaParameterWeakReference:(const void *)a1 assetRegistry:(id)a2;
- (id)initWithUID:(id)a0 ownedMetaParameter:(struct unique_ptr<Phase::MetaParameter, std::default_delete<Phase::MetaParameter>> { struct __compressed_pair<Phase::MetaParameter *, std::default_delete<Phase::MetaParameter>> { struct MetaParameter *x0; } x0; })a1 assetRegistry:(id)a2;
- (const void *)getMetaParameter;

@end
