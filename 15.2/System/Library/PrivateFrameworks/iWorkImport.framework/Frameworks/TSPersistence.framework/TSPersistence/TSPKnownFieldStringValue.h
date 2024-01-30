@interface TSPKnownFieldStringValue : TSPKnownField {
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _value;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)debugDescription;
- (id)initWithFieldDescriptor:(const void *)a0 fieldInfo:(const void *)a1 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a2 reflection:(const struct Reflection { struct Descriptor *x0; struct ReflectionSchema { struct Message *x0; unsigned int *x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; } x1; struct DescriptorPool *x2; struct MessageFactory *x3; int x4; } *)a3;
- (void)mergeToMessage:(struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 reflection:(const struct Reflection { struct Descriptor *x0; struct ReflectionSchema { struct Message *x0; unsigned int *x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; } x1; struct DescriptorPool *x2; struct MessageFactory *x3; int x4; } *)a1;

@end
