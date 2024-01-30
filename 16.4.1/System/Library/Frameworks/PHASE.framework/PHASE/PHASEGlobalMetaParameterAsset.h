@interface PHASEGlobalMetaParameterAsset : PHASEAsset {
    const void *_metaParamReference;
    struct unique_ptr<Phase::MetaParameter, std::default_delete<Phase::MetaParameter>> { struct __compressed_pair<Phase::MetaParameter *, std::default_delete<Phase::MetaParameter>> { struct MetaParameter *__value_; } __ptr_; } _metaParamOwnedAsset;
    struct MetaParamState { struct MetaParameter *param; struct Fader<double> { struct Envelope<double> { struct vector<Phase::Envelope<double>::SegmentInternal, std::allocator<Phase::Envelope<double>::SegmentInternal>> { struct SegmentInternal *__begin_; struct SegmentInternal *__end_; struct __compressed_pair<Phase::Envelope<double>::SegmentInternal *, std::allocator<Phase::Envelope<double>::SegmentInternal>> { struct SegmentInternal *__value_; } __end_cap_; } mSegments; } mEnvelope; double mOffset; double mDefaultValue; double mValue; } mFader; union MetaParamValue { double fltVal; unsigned long long stringVal; } currentInputValue; } _metaParamState;
}

+ (id)new;

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (void *)getMetaParamState;
- (const void *)getMetaParameter;
- (id)initWithUID:(id)a0 assetRegistry:(id)a1;
- (id)initWithUID:(id)a0 metaParameterWeakReference:(const void *)a1 assetRegistry:(id)a2;
- (id)initWithUID:(id)a0 ownedMetaParameter:(struct unique_ptr<Phase::MetaParameter, std::default_delete<Phase::MetaParameter>> { struct __compressed_pair<Phase::MetaParameter *, std::default_delete<Phase::MetaParameter>> { struct MetaParameter *x0; } x0; })a1 assetRegistry:(id)a2;

@end
