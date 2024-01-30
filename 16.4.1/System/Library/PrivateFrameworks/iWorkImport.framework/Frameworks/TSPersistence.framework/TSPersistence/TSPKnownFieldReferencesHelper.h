@class NSArray, TSPLazyReferenceArray;

@interface TSPKnownFieldReferencesHelper : NSObject {
    struct RepeatedField<long long> { int current_size_; int total_size_; void *arena_or_elements_; } _objectReferences;
    struct RepeatedField<long long> { int current_size_; int total_size_; void *arena_or_elements_; } _dataReferences;
    TSPLazyReferenceArray *_strongObjects;
    TSPLazyReferenceArray *_weakObjects;
    NSArray *_allData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithFieldDescriptor:(const void *)a0 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a1 reflection:(const struct Reflection { struct Descriptor *x0; struct ReflectionSchema { struct Message *x0; unsigned int *x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; } x1; struct DescriptorPool *x2; struct MessageFactory *x3; int x4; } *)a2;
- (void)processFieldDescriptor:(const void *)a0 message:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a1 reflection:(const struct Reflection { struct Descriptor *x0; struct ReflectionSchema { struct Message *x0; unsigned int *x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; } x1; struct DescriptorPool *x2; struct MessageFactory *x3; int x4; } *)a2;
- (void)processFieldsFromMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0 messageDescriptor:(const void *)a1 reflection:(const struct Reflection { struct Descriptor *x0; struct ReflectionSchema { struct Message *x0; unsigned int *x1; unsigned int *x2; int x3; int x4; int x5; int x6; int x7; int x8; } x1; struct DescriptorPool *x2; struct MessageFactory *x3; int x4; } *)a2;

@end
