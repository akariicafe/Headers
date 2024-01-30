@class NSString;

@interface TSCEFunctionSpec : NSObject {
    NSString *_functionName;
    struct vector<TSCEFunctionArgSpec, std::__1::allocator<TSCEFunctionArgSpec> > { struct TSCEFunctionArgSpec *__begin_; struct TSCEFunctionArgSpec *__end_; struct __compressed_pair<TSCEFunctionArgSpec *, std::__1::allocator<TSCEFunctionArgSpec> > { struct TSCEFunctionArgSpec *__value_; } __end_cap_; } _arguments;
    struct vector<TSCEFunctionArgSpec, std::__1::allocator<TSCEFunctionArgSpec> > { struct TSCEFunctionArgSpec *__begin_; struct TSCEFunctionArgSpec *__end_; struct __compressed_pair<TSCEFunctionArgSpec *, std::__1::allocator<TSCEFunctionArgSpec> > { struct TSCEFunctionArgSpec *__value_; } __end_cap_; } _repeatingArguments;
}

@property (readonly) NSString *functionName;
@property (readonly) int functionIndex;
@property (readonly) const struct vector<TSCEFunctionArgSpec, std::__1::allocator<TSCEFunctionArgSpec> > { struct TSCEFunctionArgSpec *x0; struct TSCEFunctionArgSpec *x1; struct __compressed_pair<TSCEFunctionArgSpec *, std::__1::allocator<TSCEFunctionArgSpec> > { struct TSCEFunctionArgSpec *x0; } x2; } *arguments;
@property (readonly, nonatomic) short minArguments;
@property (readonly, nonatomic) short maxArguments;
@property (readonly, nonatomic) unsigned long long numArguments;
@property (readonly, nonatomic) BOOL isOperator;
@property (readonly, nonatomic) int versionShippedIn;
@property (readonly, nonatomic) short repeatingGroupSize;

+ (id)specDictionary;
+ (id)functionSpecForFunctionIndex:(int)a0;
+ (id)specWithFunctionName:(id)a0 minArgs:(int)a1 maxArgs:(int)a2 repeatingGroupSize:(short)a3 isOperator:(int)a4 shipVersion:(int)a5 arguments:(const struct vector<TSCEFunctionArgSpec, std::__1::allocator<TSCEFunctionArgSpec> > { struct TSCEFunctionArgSpec *x0; struct TSCEFunctionArgSpec *x1; struct __compressed_pair<TSCEFunctionArgSpec *, std::__1::allocator<TSCEFunctionArgSpec> > { struct TSCEFunctionArgSpec *x0; } x2; } *)a6 functionIndex:(int)a7;
+ (id)functionSpecForFunctionName:(id)a0;
+ (BOOL)isModeEnabled:(short)a0 functionIndex:(short)a1;
+ (id)unsupportedFunctionNameForLocale:(id)a0;
+ (BOOL)hasAnyDateArgumentsToFunction:(int)a0;

- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (id)initWithFunctionName:(id)a0 minArgs:(int)a1 maxArgs:(int)a2 repeatingGroupSize:(short)a3 isOperator:(BOOL)a4 shipVersion:(int)a5 arguments:(const struct vector<TSCEFunctionArgSpec, std::__1::allocator<TSCEFunctionArgSpec> > { struct TSCEFunctionArgSpec *x0; struct TSCEFunctionArgSpec *x1; struct __compressed_pair<TSCEFunctionArgSpec *, std::__1::allocator<TSCEFunctionArgSpec> > { struct TSCEFunctionArgSpec *x0; } x2; } *)a6 functionIndex:(int)a7;
- (void)loadRepeatingArguments;
- (id)localizedFunctionNameForLocale:(id)a0;
- (struct TSCEFunctionArgSpec { int x0; int x1; unsigned char x2; int x3; struct unordered_set<TSCEArgumentType, std::__1::hash<TSCEArgumentType>, std::__1::equal_to<TSCEArgumentType>, std::__1::allocator<TSCEArgumentType> > { struct __hash_table<TSCEArgumentType, std::__1::hash<TSCEArgumentType>, std::__1::equal_to<TSCEArgumentType>, std::__1::allocator<TSCEArgumentType> > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> **x0; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> *> > { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *>, std::__1::allocator<std::__1::__hash_node<TSCEArgumentType, void *> > > { struct __hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> { struct __hash_node_base<std::__1::__hash_node<TSCEArgumentType, void *> *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::hash<TSCEArgumentType> > { unsigned long long x0; } x2; struct __compressed_pair<float, std::__1::equal_to<TSCEArgumentType> > { float x0; } x3; } x0; } x4; struct vector<TSCEValue, std::__1::allocator<TSCEValue> > { struct TSCEValue *x0; struct TSCEValue *x1; struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> > { struct TSCEValue *x0; } x2; } x5; short x6; id x7; double x8; double x9; short x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; } *)argumentSpecForIndex:(unsigned long long)a0;
- (void)p_ValidateArguments;
- (id)localizedToolTipStringForLocale:(id)a0;
- (id)displayStringForLocale:(id)a0;
- (int)accessorModeForArgumentIndex:(unsigned long long)a0;
- (int)preferredTypeForArgumentIndex:(unsigned long long)a0;
- (id)nativeSyntaxStringForArgument:(int)a0;
- (long long)modeNumberForLocalizedString:(id)a0 argumentSpecIndex:(unsigned long long)a1 attributeMax:(long long)a2 locale:(id)a3;

@end
