@class TSUTemporaryDirectory, TSPObjectContext, TSUPathSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface TSPDataManager : NSObject {
    NSObject<OS_dispatch_queue> *_datasQueue;
    long long _nextNewIdentifier;
    struct unordered_map<const long long, TSPData *__weak, TSP::ObjectIdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSPData *__weak> > > { struct __hash_table<std::__1::__hash_value_type<const long long, TSPData *__weak>, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, true>, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSPData *__weak>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::__hash_value_type<const long long, TSPData *__weak> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const long long, TSPData *__weak>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const long long, std::__1::__hash_value_type<const long long, TSPData *__weak>, TSP::ObjectIdentifierHash, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<const long long, std::__1::__hash_value_type<const long long, TSPData *__weak>, std::__1::equal_to<const long long>, true> > { float __value_; } __p3_; } __table_; } _identifierToDataMap;
    struct unordered_map<const std::__1::array<unsigned char, 20>, TSPData *__weak, TSP::DigestHash, TSP::DigestEqualTo, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak> > > { struct __hash_table<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, std::__1::__unordered_map_hasher<const std::__1::array<unsigned char, 20>, std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestHash, true>, std::__1::__unordered_map_equal<const std::__1::array<unsigned char, 20>, std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestEqualTo, true>, std::__1::allocator<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> **__value_; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *> > { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, void *> *> *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const std::__1::array<unsigned char, 20>, std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestHash, true> > { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__1::__unordered_map_equal<const std::__1::array<unsigned char, 20>, std::__1::__hash_value_type<const std::__1::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestEqualTo, true> > { float __value_; } __p3_; } __table_; } _digestToDataMap;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    TSUPathSet *_temporaryDirectoryPathSet;
    BOOL _hasExternalReferences;
    NSObject<OS_dispatch_queue> *_externalReferenceRemovalQueue;
    NSObject<OS_dispatch_group> *_externalReferenceRemovalGroup;
}

@property (readonly, weak, nonatomic) TSPObjectContext *context;

+ (void)readWithChannel:(id)a0 handler:(id /* block */)a1;
+ (void)readWithChannelImpl:(id)a0 handler:(id /* block */)a1;
+ (BOOL)isSupportedURL:(id)a0;
+ (void)readWithURL:(id)a0 handler:(id /* block */)a1;

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addData:(id)a0;
- (void)removeFileAtURL:(id)a0;
- (id).cxx_construct;
- (void)enumerateDatasUsingBlock:(id /* block */)a0;
- (void)didCloseDocument;
- (id)checkForPersistenceWarningsWithPackageURL:(id)a0;
- (void)removeExternalReferences;
- (id)dataOrNilForIdentifier:(long long)a0;
- (id)dataFromReadChannel:(id)a0 filename:(id)a1;
- (void)coordinateReadingNewFileURL:(id)a0 byAccessor:(id /* block */)a1;
- (id)addNewDataForStorage:(id)a0 digest:(id)a1 filename:(id)a2;
- (id)dataWithStorage:(id)a0 digest:(id)a1 filename:(id)a2 skipDocumentResourcesLookup:(BOOL)a3 accessorBlock:(id /* block */)a4;
- (id)dataForIdentifierImpl:(long long)a0;
- (void)waitForRemoveExternalReferencesToComplete;
- (void)removeExternalReferenceForData:(id)a0 storage:(id)a1;
- (id)dataFromNSData:(id)a0 filename:(id)a1;
- (id)copyData:(id)a0;
- (id)dataForIdentifier:(long long)a0;
- (id)dataForDigest:(id)a0;
- (void)dataForDigest:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (BOOL)prepareSaveWithOldPackage:(id)a0 saveOperationState:(id)a1;
- (void)didSaveWithSaveOperationState:(id)a0;
- (BOOL)migrateDataToTemporaryStorageFromPackage:(id)a0;
- (id)dataForDocumentResourceInfo:(id)a0 fromFileURL:(id)a1;
- (id)dataFromFileURL:(id)a0 filename:(id)a1 useFileCoordination:(BOOL)a2;
- (id)dataFromReadChannel:(id)a0 filename:(id)a1 dataURLOrNil:(id)a2 canLink:(BOOL)a3;
- (void)dataFromReadChannel:(id)a0 filename:(id)a1 dataURLOrNil:(id)a2 canLink:(BOOL)a3 completion:(id /* block */)a4;
- (void)willCreateData;
- (id)temporaryDataStorageURLForFilename:(id)a0;
- (id)dataForExistingData:(id)a0 digest:(id)a1 filename:(id)a2 temporaryDataStorageURL:(id)a3;
- (BOOL)linkOrCloneTemporaryURL:(id)a0 fromURL:(id)a1 canLink:(BOOL)a2;
- (void)findExistingDataForReadChannel:(id)a0 dataURL:(id)a1 dataURLType:(long long)a2 readHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)findExistingDataForReadChannel:(id)a0 dataURL:(id)a1 dataURLType:(long long)a2 temporaryDataStorageURL:(id)a3 keepTemporaryFileOnSuccess:(BOOL)a4 completion:(id /* block */)a5;
- (int)openTemporaryURL:(id)a0;
- (id)dataForDigestImpl:(id)a0 documentResourceInfo:(id)a1 skipDocumentResourcesLookup:(BOOL)a2 expectedLength:(unsigned long long)a3 accessorBlock:(id /* block */)a4;
- (id)dataWithTemporaryDataStorageURL:(id)a0 digest:(id)a1 filename:(id)a2;
- (void)addDataFromPackage:(id)a0 packageURL:(id)a1 dataInfo:(const struct DataInfo { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x6; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x7; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x8; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x9; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x10; struct DataAttributes *x11; struct EncryptionInfo *x12; unsigned long long x13; BOOL x14; int x15; } *)a2 packageMetadata:(id)a3 documentResourceInfo:(id)a4 areExternalReferencesAllowed:(BOOL)a5;
- (BOOL)prepareTemporaryDataStorageForData:(id)a0 temporaryDataStorage:(id *)a1;
- (BOOL)shouldAttemptToMaterializeData:(id)a0 expectedLength:(unsigned long long)a1;
- (BOOL)attemptToMaterializeData:(id)a0 dataURL:(id)a1 dataURLType:(long long)a2;
- (id)preferredFilenameForDocumentResourceInfo:(id)a0;
- (id)dataFromURL:(id)a0 filename:(id)a1 useFileCoordination:(BOOL)a2;
- (void)dataFromFileURL:(id)a0 filename:(id)a1 context:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (id)documentResourceDataForInfo:(id)a0 withStorage:(id)a1 filename:(id)a2;
- (id)remoteDataWithURL:(id)a0 digest:(id)a1 filename:(id)a2 canDownload:(BOOL)a3 downloadPriority:(long long)a4;
- (void)loadFromPackage:(id)a0 packageURL:(id)a1 packageMetadata:(id)a2 areExternalReferencesAllowed:(BOOL)a3;
- (id)dataFromExternalReferenceURL:(id)a0 filename:(id)a1 useFileCoordination:(BOOL)a2;

@end
