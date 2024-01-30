@class NSMutableArray, NSString, NSArray, HKSample, HKHealthStore, HKSampleIteratorQueryCursor, HKQueryAnchor;

@interface HKMultiTypeSampleIterator : NSObject <HKIterator> {
    NSArray *_queryDescriptors;
    NSArray *_sortDescriptors;
    HKQueryAnchor *_followingAnchor;
    HKQueryAnchor *_upToAndIncludingAnchor;
    NSArray *_distinctByKeyPaths;
    unsigned long long _bufferSize;
    unsigned long long _limit;
    HKHealthStore *_healthStore;
    unsigned long long _state;
    HKSampleIteratorQueryCursor *_queryCursor;
    NSMutableArray *_buffer;
    HKSample *_current;
    unsigned long long _numberOfSamplesDelivered;
}

@property (readonly, copy, nonatomic) HKSample *sample;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_queryForNextPageIfNecessaryWithError:(id *)a0;
- (id)initWithQueryDescriptors:(id)a0 sortDescriptors:(id)a1 followingAnchor:(id)a2 upToAndIncludingAnchor:(id)a3 distinctByKeyPaths:(id)a4 bufferSize:(unsigned long long)a5 limit:(unsigned long long)a6 healthStore:(id)a7;
- (id)initWithQueryDescriptors:(id)a0 sortDescriptors:(id)a1 bufferSize:(long long)a2 healthStore:(id)a3;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)advanceWithError:(id *)a0;
- (id)object;

@end
