@class NSDictionary, NSString;

@interface MLMultiFunctionProgramContainer : MLProgramContainer {
    struct map<std::string, InputNameToShapes, std::less<std::string>, std::allocator<std::pair<const std::string, InputNameToShapes>>> { struct __tree<std::__value_type<std::string, InputNameToShapes>, std::__map_value_compare<std::string, std::__value_type<std::string, InputNameToShapes>, std::less<std::string>, true>, std::allocator<std::__value_type<std::string, InputNameToShapes>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, InputNameToShapes>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, InputNameToShapes>, std::less<std::string>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } functionNameToInputShapes;
    NSString *_activeFunction;
}

@property (retain, nonatomic) NSDictionary *functionNameToOutputLayersNames;
@property (retain, nonatomic) NSDictionary *functionNameToInputLayersNames;
@property (retain, nonatomic) NSString *activeFunction;

+ (id)containerFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;

- (id)initWithContainer:(id)a0 program:(const void *)a1 error:(id *)a2;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
