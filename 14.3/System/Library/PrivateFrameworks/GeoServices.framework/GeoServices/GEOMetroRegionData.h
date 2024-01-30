@interface GEOMetroRegionData : NSObject {
    struct unique_ptr<gloria::DB, std::__1::default_delete<gloria::DB> > { struct __compressed_pair<gloria::DB *, std::__1::default_delete<gloria::DB> > { struct DB *__value_; } __ptr_; } _db;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (id).cxx_construct;
- (id)metroNameForLocation:(id)a0;

@end
