@class NSString;

@interface _OTSVGParserDelegate : NSObject <NSXMLParserDelegate>

@property BOOL errorOccurred;
@property unsigned int skipDepth;
@property unsigned int unitsPerEm;
@property void *root;
@property struct vector<std::reference_wrapper<SVG::Element>, std::allocator<std::reference_wrapper<SVG::Element>>> { void *__begin_; void *__end_; struct __compressed_pair<std::reference_wrapper<SVG::Element> *, std::allocator<std::reference_wrapper<SVG::Element>>> { void *__value_; } __end_cap_; } stack;
@property struct unordered_map<std::string, std::stack<std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::stack<std::string>>>> { struct __hash_table<std::__hash_value_type<std::string, std::stack<std::string>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::hash<std::string>, std::equal_to<std::string>, true>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::equal_to<std::string>, std::hash<std::string>, true>, std::allocator<std::__hash_value_type<std::string, std::stack<std::string>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>>> { void **__value_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> *>> { unsigned long long __value_; } __data_; } __value_; } __ptr_; } __bucket_list_; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::stack<std::string>>, void *> *> { void *__next_; } __value_; } __p1_; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::hash<std::string>, std::equal_to<std::string>, true>> { unsigned long long __value_; } __p2_; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::stack<std::string>>, std::equal_to<std::string>, std::hash<std::string>, true>> { float __value_; } __p3_; } __table_; } namespaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)parserDidEndDocument:(id)a0;
- (void)parser:(id)a0 parseErrorOccurred:(id)a1;
- (id).cxx_construct;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 validationErrorOccurred:(id)a1;
- (void).cxx_destruct;
- (void)parser:(id)a0 didEndMappingPrefix:(id)a1;
- (void)parser:(id)a0 didStartMappingPrefix:(id)a1 toURI:(id)a2;
- (void)parserDidStartDocument:(id)a0;
- (id)initWithUnitsPerEm:(unsigned int)a0;

@end
