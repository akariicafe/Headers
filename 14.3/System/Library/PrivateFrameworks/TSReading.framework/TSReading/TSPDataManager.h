@class NSURL, TSPObjectContext, NSObject, TSUPathSet;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface TSPDataManager : NSObject {
    NSObject<OS_dispatch_queue> *_datasQueue;
    long long _nextNewIdentifier;
    struct unordered_map<const long long, TSPData *__weak, TSP::ObjectIdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSPData *__weak> > > { struct __hash_table<std::__1::__hash_value_type<const long long, TSPData *__weak>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSPData *__weak>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, TSPData *__weak> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSPData *__weak>, std::__1::equal_to<const long long>, true> > { float __value_; } __p3_; } __table_; } _identifierToDataMap;
    struct unordered_map<const std::__1::array<unsigned char, 20>, TSPData *__weak, TSP::DataDigestHash, TSP::DataDigestEqualTo, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak> > > { struct __hash_table<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, std::__1::__unordered_map_hasher<const std::__1::array<unsigned char, 20>, std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestHash, true>, std::__1::__unordered_map_equal<const std::__1::array<unsigned char, 20>, std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestEqualTo, true>, std::__1::allocator<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const std::__1::array<unsigned char, 20>, std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestHash, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<const std::__1::array<unsigned char, 20>, std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DataDigestEqualTo, true> > { float __value_; } __p3_; } __table_; } _digestToDataMap;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    NSURL *_lastDocumentURL;
    NSURL *_temporaryDirectoryURL;
    NSURL *_temporaryUniqueDirectoryURL;
    TSUPathSet *_temporaryPathSet;
    BOOL _hasExternalReferences;
    NSObject<OS_dispatch_group> *_externalReferenceRemovalGroup;
}

@property (readonly, weak, nonatomic) TSPObjectContext *context;

+ (void)readWithChannel:(id)a0 handler:(id /* block */)a1;
+ (id)stringForDigest:(const struct array<unsigned char, 20> { unsigned char x0[20]; } *)a0;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addData:(id)a0;
- (id).cxx_construct;
- (void)removeFileAtPath:(id)a0;
- (void)setDocumentURL:(id)a0;
- (void)enumerateDatasUsingBlock:(id /* block */)a0;
- (void)removeTemporaryDirectory;
- (void)didCloseDocument;
- (id)checkForPersistenceWarningsWithPackageURL:(id)a0;
- (void)removeExternalReferences;
- (id)dataOrNilForIdentifier:(long long)a0;
- (id)dataFromFileURL:(id)a0 useFileCoordination:(BOOL)a1;
- (id)dataFromReadChannel:(id)a0 filename:(id)a1;
- (void)coordinateReadingNewFileURL:(id)a0 byAccessor:(id /* block */)a1;
- (id)temporaryPathForFilename:(id)a0;
- (id)dataFromReadChannel:(id)a0 filename:(id)a1 temporaryPath:(id)a2;
- (BOOL)linkTemporaryPath:(id)a0 fromURL:(id)a1;
- (id)dataForExistingData:(id)a0 digest:(const struct array<unsigned char, 20> { unsigned char x0[20]; } *)a1 filename:(id)a2 temporaryPath:(id)a3;
- (void)findExistingDataForReadChannel:(id)a0 dataURL:(id)a1 readHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)findExistingDataForReadChannel:(id)a0 dataURL:(id)a1 temporaryPath:(id)a2 shouldWriteIfFound:(BOOL)a3 completion:(id /* block */)a4;
- (id)addNewDataForStorage:(id)a0 digest:(const struct array<unsigned char, 20> { unsigned char x0[20]; } *)a1 filename:(id)a2;
- (int)openTemporaryPath:(id)a0;
- (id)dataForDigestImpl:(const struct array<unsigned char, 20> { unsigned char x0[20]; } *)a0 accessorBlock:(id /* block */)a1;
- (id)dataWithTemporaryPath:(id)a0 digest:(const struct array<unsigned char, 20> { unsigned char x0[20]; } *)a1 filename:(id)a2;
- (id)dataWithStorage:(id)a0 digest:(const struct array<unsigned char, 20> { unsigned char x0[20]; } *)a1 filename:(id)a2 skipDocumentResourcesLookup:(BOOL)a3 accessorBlock:(id /* block */)a4;
- (id)dataForIdentifierImpl:(long long)a0;
- (id)createTemporaryDirectoryForPackageURL:(id)a0;
- (void)waitForRemoveExternalReferencesToComplete;
- (void)removeExternalReferenceForData:(id)a0 storage:(id)a1;
- (id)dataForDigestImpl:(const struct array<unsigned char, 20> { unsigned char x0[20]; } *)a0 skipDocumentResourcesLookup:(BOOL)a1 accessorBlock:(id /* block */)a2;
- (id)dataFromURL:(id)a0 useFileCoordination:(BOOL)a1;
- (id)dataFromReadChannel:(id)a0 filename:(id)a1 linkURLOrNil:(id)a2;
- (id)dataFromNSData:(id)a0 filename:(id)a1;
- (id)documentResourceDataWithStorage:(id)a0 digestString:(id)a1 filename:(id)a2;
- (id)copyData:(id)a0;
- (id)dataForIdentifier:(long long)a0;
- (id)dataFromExternalReferenceURL:(id)a0 useFileCoordination:(BOOL)a1;
- (id)dataForDigest:(const struct array<unsigned char, 20> { unsigned char x0[20]; } *)a0;
- (void)dataForDigest:(const struct array<unsigned char, 20> { unsigned char x0[20]; } *)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
