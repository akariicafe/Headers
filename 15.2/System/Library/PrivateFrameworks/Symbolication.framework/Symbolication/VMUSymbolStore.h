@class VMUDebugTimer, NSString, NSMutableDictionary, NSData, VMUProcessObjectGraph, NSXMLParser;

@interface VMUSymbolStore : NSObject <NSSecureCoding, NSXMLParserDelegate> {
    VMUDebugTimer *_debugTimer;
    struct map<std::string, std::unordered_set<unsigned long long>, std::less<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<unsigned long long>>>> { struct __tree<std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, std::unordered_set<unsigned long long>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::unordered_set<unsigned long long>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<unsigned long long>>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _addressesGroupedByUuid;
    struct unordered_set<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct __hash_table<unsigned long long, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<unsigned long long>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<unsigned long long, void *> *>, std::allocator<std::__hash_node<unsigned long long, void *>>> { struct __hash_node_base<std::__hash_node<unsigned long long, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::hash<unsigned long long>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::equal_to<unsigned long long>> { float __value_; } __p3_; } __table_; } _addressesTracker;
    NSData *_signature;
    BOOL _resymbolicatedSuccessfully;
    NSMutableDictionary *_resymbolicationUUIDs;
    BOOL _debugStore;
    NSString *parsedResult;
    NSString *parsedKey;
    NSString *parsedValue;
    NSXMLParser *xmlParser;
    unsigned long long backtraceSample;
    unsigned long long binarySection;
    unsigned long long globalVariable;
    unsigned long long mallocStackLogging;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct _CSTypeRef { unsigned long long _opaque_1; unsigned long long _opaque_2; } symbolicator;
@property (weak, nonatomic) VMUProcessObjectGraph *graph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void).cxx_destruct;
- (BOOL)resymbolicateWithDsymPath:(id)a0 libraryNames:(id)a1 all:(BOOL)a2 progress:(id)a3 showDebugInfo:(BOOL)a4 error:(id *)a5;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0 debugTimer:(id)a1;
- (void)addBacktrace:(id)a0 origin:(int)a1;
- (void)addAddress:(unsigned long long)a0 origin:(int)a1;
- (id)_createResymbolicatedSignature;
- (id)_createSymbolicatorSignature;
- (void)_groupAddressTrackerByUuid;
- (void)_extractAddressesFromSymbolicator;
- (BOOL)_readContentsOfDsymFile:(id)a0;
- (BOOL)_getDsymPathsForUUIDs:(id)a0 andReportProgress:(id)a1;
- (void)_flagSymbolOwnersForResymbolication;
- (BOOL)_refillSymbolOwnersWithDataAndReportProgress:(id)a0;

@end
