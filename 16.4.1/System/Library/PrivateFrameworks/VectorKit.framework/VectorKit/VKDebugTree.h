@class NSArray;

@interface VKDebugTree : NSObject {
    struct DebugTreeNode { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _name; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _identifier; struct vector<gdc::DebugTreeNode, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode *__begin_; struct DebugTreeNode *__end_; struct __compressed_pair<gdc::DebugTreeNode *, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode *__value_; } __end_cap_; } _children; struct vector<gdc::DebugTreeProperty, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty *__begin_; struct DebugTreeProperty *__end_; struct __compressed_pair<gdc::DebugTreeProperty *, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty *__value_; } __end_cap_; } _properties; } _debugTree;
    struct bitset<4UL> { unsigned long long __first_; } _options;
    NSArray *_nodes;
}

- (const void *)internalData;
- (id).cxx_construct;
- (id)nodes;
- (void)setOptions:(id)a0;
- (void).cxx_destruct;
- (void)printTree;
- (id)_serializeNode:(const void *)a0;
- (id)logTree;
- (struct optional<gdc::DebugTreeNode> { BOOL x0; union ValueUnion { unsigned char x0[96]; struct DebugTreeNode { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; struct vector<gdc::DebugTreeNode, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode *x0; struct DebugTreeNode *x1; struct __compressed_pair<gdc::DebugTreeNode *, std::allocator<gdc::DebugTreeNode>> { struct DebugTreeNode *x0; } x2; } x2; struct vector<gdc::DebugTreeProperty, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty *x0; struct DebugTreeProperty *x1; struct __compressed_pair<gdc::DebugTreeProperty *, std::allocator<gdc::DebugTreeProperty>> { struct DebugTreeProperty *x0; } x2; } x3; } x1; } x1; })_deserializeNode:(id)a0;
- (struct optional<gdc::DebugTreeProperty> { BOOL x0; union ValueUnion { unsigned char x0[80]; struct DebugTreeProperty { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; int x1; struct vector<gdc::DebugTreeValue, std::allocator<gdc::DebugTreeValue>> { struct DebugTreeValue *x0; struct DebugTreeValue *x1; struct __compressed_pair<gdc::DebugTreeValue *, std::allocator<gdc::DebugTreeValue>> { struct DebugTreeValue *x0; } x2; } x2; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x3; } x1; } x1; })_deserializeProperty:(id)a0;
- (struct optional<gdc::DebugTreeValue> { BOOL x0; union ValueUnion { unsigned char x0[64]; struct DebugTreeValue { struct ValueStruct { long long x0; unsigned long long x1; double x2; BOOL x3; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x4; } x0; int x1; } x1; } x1; })_deserializeValue:(id)a0;
- (void)_outputTree:(void *)a0;
- (void)_populateData;
- (id)_serializeProperty:(const void *)a0;
- (id)_serializeValue:(const void *)a0;
- (BOOL)deserializeTree:(id)a0;
- (BOOL)deserializeZippedTree:(id)a0;
- (void)disableAllOptions;
- (void)enableAllOptions;
- (void)populateData:(id)a0;
- (void)replaceInternalData:(const void *)a0;
- (id)serializeTree;
- (id)serializeZippedTree;
- (void)setOption:(unsigned long long)a0 value:(BOOL)a1;

@end
