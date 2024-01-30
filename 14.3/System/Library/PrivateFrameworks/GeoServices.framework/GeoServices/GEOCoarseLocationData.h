@interface GEOCoarseLocationData : NSObject {
    struct unique_ptr<gloria::DB, std::__1::default_delete<gloria::DB> > { struct __compressed_pair<gloria::DB *, std::__1::default_delete<gloria::DB> > { struct DB *__value_; } __ptr_; } _db;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } _availableZoomLevels;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0;
- (id).cxx_construct;
- (id)snappedLocationForLocation:(id)a0;
- (BOOL)_populateAvailableZoomRange;

@end
