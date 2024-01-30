@interface ATXHistogramData : NSObject <NSSecureCoding> {
    struct HDGuardedData { struct SimdVector<float __attribute__((ext_vector_type(8))), float> { struct vector<float __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))>> { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<float __attribute__((ext_vector_type(8)))>> { void *__value_; } __end_cap_; } chunks; unsigned long long count; } scores; struct SimdVector<int __attribute__((ext_vector_type(8))), unsigned int> { struct vector<int __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))>> { void *__begin_; void *__end_; struct __compressed_pair<int * __attribute__((ext_vector_type(8))), (anonymous namespace)::SimdAlignedAllocator<int __attribute__((ext_vector_type(8)))>> { void *__value_; } __end_cap_; } chunks; unsigned long long count; } abs; BOOL enumerationInProgress; } _private_unsafeGuardedData;
    struct unique_ptr<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>, std::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>>> { struct __compressed_pair<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex> *, std::default_delete<proactive::pas::SynchronizedObject<(anonymous namespace)::HDGuardedData, proactive::pas::detail::RecursiveMutex>>> { void *__value_; } __ptr_; } _guardedData;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (void)enumerate:(id /* block */)a0;
- (id)init;
- (void)clear;
- (void)decayWithHalfLifeInDays:(float)a0;
- (void)decayByFactor:(float)a0;
- (void).cxx_destruct;
- (void)deleteWhereA:(unsigned short)a0 b:(unsigned short)a1;
- (id)aSet;
- (void)add:(float)a0 a:(unsigned short)a1 b:(unsigned short)a2;
- (id)bSet;
- (float)lookupSmoothedWithBucketCount:(unsigned short)a0 distanceScale:(float)a1 a:(unsigned short)a2 b:(unsigned short)a3;
- (float)lookupUnsmoothedA:(unsigned short)a0 b:(unsigned short)a1;
- (int)countWhereA:(unsigned short)a0 b:(unsigned short)a1;
- (float)entropyWhereA:(unsigned short)a0 b:(unsigned short)a1;
- (void)applyPermutationToA:(id)a0;
- (id)initWithCategoricalHistogram:(id)a0;
- (id)initWithTimeHistogram:(id)a0;

@end
