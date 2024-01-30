@class NSError, NSString, NSArray, NSSet, HDSampleQueryDescription, HDProfile, HKSample, HKSortedQueryAnchor;

@interface HDSortedSampleIterator : NSObject <HDSampleIterator> {
    HDSampleQueryDescription *_sampleQueryDescription;
    NSArray *_sortDescriptors;
    HKSortedQueryAnchor *_anchor;
    long long _bufferSize;
    NSSet *_restrictedSourceEntities;
    HDProfile *_profile;
    NSError *_lastError;
    BOOL _isComplete;
    struct vector<std::__1::tuple<long long, HKSample *>, std::__1::allocator<std::__1::tuple<long long, HKSample *> > > { struct tuple<long long, HKSample *> *__begin_; struct tuple<long long, HKSample *> *__end_; struct __compressed_pair<std::__1::tuple<long long, HKSample *> *, std::__1::allocator<std::__1::tuple<long long, HKSample *> > > { struct tuple<long long, HKSample *> *__value_; } __end_cap_; } _buffer;
    struct tuple<long long, HKSample *> { struct __tuple_impl<std::__1::__tuple_indices<0, 1>, long long, HKSample *> { long long __value_; HKSample *__value_; } __base_; } _current;
}

@property (readonly, copy, nonatomic) HKSortedQueryAnchor *nextAnchor;
@property (readonly, nonatomic) HKSample *sample;
@property (readonly, nonatomic) long long objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)object;
- (BOOL)_queryForNextPageIfNecessaryWithError:(id *)a0;
- (BOOL)advanceWithError:(id *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSampleQueryDescription:(id)a0 sortDescriptors:(id)a1 anchor:(id)a2 bufferSize:(long long)a3 profile:(id)a4;

@end
