@class TSPDatabase, TSPDistributableFileManager, TSPDistributableArchiveOutputStream;

@interface TSPDistributableWriter : NSObject {
    TSPDistributableArchiveOutputStream *_outputStream;
    struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree<long long, std::__1::less<long long>, std::__1::allocator<long long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<long long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<long long> > { unsigned long long x0; } x2; } x0; } *_encodedIds;
    struct set<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree<int, std::__1::less<int>, std::__1::allocator<int> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<int, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::less<int> > { unsigned long long x0; } x2; } x0; } *_typesSeen;
    _Atomic BOOL _isCancelled;
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    unsigned long long _processedEntriesCount;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithDatabase:(id)a0 fileManager:(id)a1 outputStream:(id)a2 checkCrc:(unsigned int)a3 includeToc:(BOOL)a4;
- (BOOL)_processEntry:(id)a0 tocEntries:(id)a1 progressContext:(id)a2 error:(id *)a3;
- (id)initWithTangierPath:(id)a0 fileManager:(id)a1 outputStream:(id)a2 checkCrc:(unsigned int)a3;
- (BOOL)goAndReportProgress:(BOOL)a0 error:(id *)a1 context:(id)a2;

@end
