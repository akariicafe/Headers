@class NSString, NSArray, TSPObjectContext, NSSet, TSUTemporaryDirectory, NSDictionary, TSUPathSet, NSObject, NSIndexSet;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface TSPDataManager : NSObject <TSPDataManaging> {
    NSObject<OS_dispatch_queue> *_datasQueue;
    long long _nextNewIdentifier;
    struct IdentifierMap<TSPData *__weak> { struct __hash_table<std::__hash_value_type<const long long, TSPData *__weak>, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::hash<long long>, std::equal_to<const long long>, true>, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, std::hash<long long>, true>, std::allocator<std::__hash_value_type<const long long, TSPData *__weak>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const long long, TSPData *__weak>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::hash<long long>, std::equal_to<const long long>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<const long long, std::__hash_value_type<const long long, TSPData *__weak>, std::equal_to<const long long>, std::hash<long long>, true>> { float __value_; } __p3_; } __table_; } _identifierToDataMap;
    struct unordered_map<const std::array<unsigned char, 20>, TSPData *__weak, TSP::DigestHash, TSP::DigestEqualTo, std::allocator<std::pair<const std::array<unsigned char, 20>, TSPData *__weak>>> { struct __hash_table<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestHash, TSP::DigestEqualTo, true>, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestEqualTo, TSP::DigestHash, true>, std::allocator<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestHash, TSP::DigestEqualTo, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<const std::array<unsigned char, 20>, std::__hash_value_type<const std::array<unsigned char, 20>, TSPData *__weak>, TSP::DigestEqualTo, TSP::DigestHash, true>> { float __value_; } __p3_; } __table_; } _digestToDataMap;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    TSUPathSet *_temporaryDirectoryPathSet;
    BOOL _hasExternalReferences;
    NSObject<OS_dispatch_queue> *_externalReferenceRemovalQueue;
    NSObject<OS_dispatch_group> *_externalReferenceRemovalGroup;
}

@property (readonly, weak, nonatomic) TSPObjectContext *context;
@property (readonly, nonatomic) NSArray *allData;
@property (readonly, nonatomic) NSArray *unmaterializedRemoteData;
@property (readonly, nonatomic) NSArray *missingOrUnmaterializedRemoteData;
@property (readonly, nonatomic) NSSet *dataWarnings;
@property (readonly, nonatomic) NSIndexSet *allDataIdentifiers;
@property (readonly, nonatomic) NSDictionary *identifierToDataMap;
@property (readonly, nonatomic) NSDictionary *digestToDataMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)readWithChannel:(id)a0 handler:(id /* block */)a1;
+ (void)readWithChannelImpl:(id)a0 handler:(id /* block */)a1;
+ (BOOL)isSupportedURL:(id)a0;
+ (void)readWithURL:(id)a0 handler:(id /* block */)a1;

- (void)removeFileAtURL:(id)a0;
- (void)addData:(id)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)didCloseDocument;
- (void)removeExternalReferences;
- (id)dataOrNilForIdentifier:(long long)a0;
- (id)dataFromReadChannel:(id)a0 filename:(id)a1;
- (void)coordinateReadingNewFileURL:(id)a0 byAccessor:(id /* block */)a1;
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
- (void)enumerateAllDataUsingBlock:(id /* block */)a0;
- (id)dataForDocumentResourceInfo:(id)a0 fromFileURL:(id)a1;
- (id)dataFromFileURL:(id)a0 filename:(id)a1 useFileCoordination:(BOOL)a2;
- (id)dataFromReadChannel:(id)a0 filename:(id)a1 dataURL:(id)a2 canLink:(BOOL)a3;
- (void)dataFromReadChannel:(id)a0 filename:(id)a1 dataURL:(id)a2 canLink:(BOOL)a3 completion:(id /* block */)a4;
- (void)willCreateData;
- (id)temporaryDataStorageURLForFilename:(id)a0;
- (id)dataForExistingData:(id)a0 digest:(id)a1 hasValidatedDigestMatch:(BOOL)a2 filename:(id)a3 temporaryDataStorageURL:(id)a4;
- (BOOL)linkOrCloneTemporaryURL:(id)a0 fromURL:(id)a1 canLink:(BOOL)a2;
- (void)findExistingDataForReadChannel:(id)a0 dataURL:(id)a1 dataURLType:(long long)a2 readHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)findExistingDataForReadChannel:(id)a0 dataURL:(id)a1 dataURLType:(long long)a2 temporaryDataStorageURL:(id)a3 keepTemporaryFileOnSuccess:(BOOL)a4 completion:(id /* block */)a5;
- (id)addNewDataForStorage:(id)a0 digest:(id)a1 hasValidatedDigestMatch:(BOOL)a2 filename:(id)a3;
- (int)openTemporaryURL:(id)a0;
- (id)dataForDigestImpl:(id)a0 documentResourceInfo:(id)a1 skipDocumentResourcesLookup:(BOOL)a2 expectedLength:(unsigned long long)a3 accessorBlock:(id /* block */)a4;
- (id)dataWithTemporaryDataStorageURL:(id)a0 digest:(id)a1 hasValidatedDigestMatch:(BOOL)a2 filename:(id)a3;
- (id)dataWithStorage:(id)a0 digest:(id)a1 hasValidatedDigestMatch:(BOOL)a2 filename:(id)a3 skipDocumentResourcesLookup:(BOOL)a4 accessorBlock:(id /* block */)a5;
- (void)addDataFromPackage:(id)a0 packageURL:(id)a1 dataInfo:(const void *)a2 packageMetadata:(id)a3 documentResourceInfo:(id)a4 areExternalReferencesAllowed:(BOOL)a5;
- (BOOL)prepareTemporaryDataStorageForData:(id)a0 temporaryDataStorage:(id *)a1;
- (BOOL)shouldAttemptToMaterializeData:(id)a0 expectedLength:(unsigned long long)a1;
- (BOOL)attemptToMaterializeData:(id)a0 dataURL:(id)a1 dataURLType:(long long)a2;
- (id)preferredFilenameForDocumentResourceInfo:(id)a0;
- (id)dataFromURL:(id)a0 filename:(id)a1 useFileCoordination:(BOOL)a2;
- (void)dataFromFileURL:(id)a0 filename:(id)a1 context:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (id)documentResourceDataForInfo:(id)a0 withStorage:(id)a1 filename:(id)a2;
- (id)remoteDataWithURL:(id)a0 digest:(id)a1 filename:(id)a2 length:(unsigned long long)a3 canDownload:(BOOL)a4 downloadPriority:(long long)a5 uploadStatus:(long long)a6 modificationDate:(id)a7;
- (void)loadFromPackage:(id)a0 packageURL:(id)a1 packageMetadata:(id)a2 areExternalReferencesAllowed:(BOOL)a3 dataIdentifiersIndexSet:(id *)a4;
- (id)dataFromExternalReferenceURL:(id)a0 filename:(id)a1 useFileCoordination:(BOOL)a2;
- (id)unmaterializedRemoteDataIncludingExpiredUploads:(BOOL)a0;

@end
