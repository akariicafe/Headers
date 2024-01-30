@class NSObject, tableOffsets;
@protocol OS_dispatch_queue;

@interface _CSStore : NSObject <NSSecureCoding> {
    struct Store { tableOffsets *dataContainer; struct array<unsigned int, 64UL> { unsigned int __elems_[64]; } x0; struct Table *arrayTable; struct Table *stringTable; struct Table *dictionaryTable; struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__cxx_atomic_base_impl<long long>> { _Atomic long long __a_value; } __a_; } enumerationState; struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__cxx_atomic_base_impl<long long>> { _Atomic long long __a_value; } __a_; } getNSDataCallCount; struct Pedigree { unsigned long long family; struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } generationAtCopyTime; } pedigree; } _store;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)initByMovingStore:(void *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0 error:(id *)a1;
- (id)initWithError:(id *)a0;
- (id)init;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)description;
- (void)setExpectedAccessQueue:(id)a0;
- (void).cxx_destruct;

@end
