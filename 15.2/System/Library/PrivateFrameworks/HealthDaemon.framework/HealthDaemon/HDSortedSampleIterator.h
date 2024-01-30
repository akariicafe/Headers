@class NSError, NSString, NSArray, NSSet, HDQueryDescriptor, HDProfile, HKSample, HKSortedQueryAnchor, HKDeletedObject;

@interface HDSortedSampleIterator : NSObject <HDSampleIterator, HDDeletedObjectIterator> {
    HDQueryDescriptor *_queryDescriptor;
    BOOL _includeDeletedObjects;
    NSArray *_sortDescriptors;
    HKSortedQueryAnchor *_anchor;
    long long _bufferSize;
    NSSet *_restrictedSourceEntities;
    HDProfile *_profile;
    NSError *_lastError;
    BOOL _isComplete;
    struct vector<std::tuple<long long, HKSample *>, std::allocator<std::tuple<long long, HKSample *>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<long long, HKSample *> *, std::allocator<std::tuple<long long, HKSample *>>> { void *__value_; } __end_cap_; } _sampleBuffer;
    struct vector<std::tuple<long long, HKDeletedObject *>, std::allocator<std::tuple<long long, HKDeletedObject *>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<long long, HKDeletedObject *> *, std::allocator<std::tuple<long long, HKDeletedObject *>>> { void *__value_; } __end_cap_; } _deletedObjectsBuffer;
    struct tuple<long long, HKSample *> { struct __tuple_impl<std::__tuple_indices<0, 1>, long long, HKSample *> { long long __value_; HKSample *__value_; } __base_; } _currentSample;
    struct tuple<long long, HKDeletedObject *> { struct __tuple_impl<std::__tuple_indices<0, 1>, long long, HKDeletedObject *> { long long __value_; HKDeletedObject *__value_; } __base_; } _currentDeletedObject;
    id _currentHead;
}

@property (readonly, copy, nonatomic) HKSortedQueryAnchor *nextAnchor;
@property (readonly, nonatomic) HKSample *sample;
@property (readonly, nonatomic) long long objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HKDeletedObject *deletedObject;

- (id)initWithQueryDescriptor:(id)a0 includeDeletedObjects:(BOOL)a1 sortDescriptors:(id)a2 anchor:(id)a3 bufferSize:(long long)a4 profile:(id)a5;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)advanceWithError:(id *)a0;
- (id).cxx_construct;
- (id)object;

@end
