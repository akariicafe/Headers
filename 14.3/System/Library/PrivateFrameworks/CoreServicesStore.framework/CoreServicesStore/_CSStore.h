@class NSObject, tableOffsets;
@protocol OS_dispatch_queue;

@interface _CSStore : NSObject <NSSecureCoding> {
    struct Store { tableOffsets *dataContainer; struct array<unsigned int, 64> { unsigned int __elems_[64]; } x0; struct Table *arrayTable; struct Table *stringTable; struct Table *dictionaryTable; struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > { _Atomic long long __a_value; } __a_; } enumerationState; struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > { _Atomic long long __a_value; } __a_; } getNSDataCallCount; struct Pedigree { unsigned long long family; struct optional<unsigned int> { union { char __null_state_; unsigned int __val_; } ; BOOL __engaged_; } generationAtCopyTime; } pedigree; } _store;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)new;

- (id)initWithError:(id *)a0;
- (id)initByMovingStore:(struct Store { id x0; struct array<unsigned int, 64> { unsigned int x0[64]; } x1; struct Table *x2; struct Table *x3; struct Table *x4; struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > { _Atomic long long x0; } x0; } x5; struct atomic<long long> { struct __cxx_atomic_impl<long long, std::__1::__cxx_atomic_base_impl<long long> > { _Atomic long long x0; } x0; } x6; struct Pedigree { unsigned long long x0; struct optional<unsigned int> { union { char x0; unsigned int x1; } x0; BOOL x1; } x1; } x7; } *)a0;
- (id)init;
- (void)setExpectedAccessQueue:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id).cxx_construct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
