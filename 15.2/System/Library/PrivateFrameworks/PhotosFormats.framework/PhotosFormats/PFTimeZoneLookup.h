@class NSString;

@interface PFTimeZoneLookup : PFCachingArchiveIndex <PFCachingArchiveIndex> {
    struct unique_ptr<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>>> { struct __compressed_pair<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index> *, std::default_delete<boost::interprocess::basic_managed_mapped_file<char, boost::interprocess::rbtree_best_fit<boost::interprocess::null_mutex_family, boost::interprocess::offset_ptr<void, long, unsigned long, 0>, 0>, bipc::iset_index>>> { void *__value_; } __ptr_; } _backingFile;
    const void *_timezones;
    const void *_rtree;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)timeZoneNameForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)loadOrCreateIndex;
- (unsigned long long)indexFileVersion;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser *x0; } x0; })archiveLineParserForIndexPath:(id)a0;
- (id)indexName;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)loadIndexFile:(const char *)a0 fileSize:(long long)a1;
- (BOOL)indexSupported;
- (struct CLLocationCoordinate2D { double x0; double x1; })anyCoordinateForTimeZoneName:(id)a0;
- (const char *)indexLabel;

@end
