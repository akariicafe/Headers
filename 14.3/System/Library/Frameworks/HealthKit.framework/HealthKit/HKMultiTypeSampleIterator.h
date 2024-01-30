@class NSMutableArray, NSString, NSArray, HKSample, HKHealthStore, HKMultiTypeQueryCursor, HKQueryAnchor;

@interface HKMultiTypeSampleIterator : NSObject <HKIterator> {
    NSArray *_sampleQueryDescriptions;
    NSArray *_sortDescriptors;
    HKQueryAnchor *_followingAnchor;
    HKQueryAnchor *_upToAndIncludingAnchor;
    NSArray *_distinctByKeyPaths;
    unsigned long long _bufferSize;
    unsigned long long _limit;
    HKHealthStore *_healthStore;
    unsigned long long _state;
    HKMultiTypeQueryCursor *_queryCursor;
    NSMutableArray *_buffer;
    HKSample *_current;
    unsigned long long _numberOfSamplesDelivered;
}

@property (readonly, copy, nonatomic) HKSample *sample;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSampleQueryDescriptions:(id)a0 sortDescriptors:(id)a1 followingAnchor:(id)a2 upToAndIncludingAnchor:(id)a3 distinctByKeyPaths:(id)a4 bufferSize:(unsigned long long)a5 limit:(unsigned long long)a6 healthStore:(id)a7;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)object;
- (BOOL)_queryForNextPageIfNecessaryWithError:(id *)a0;
- (BOOL)advanceWithError:(id *)a0;
- (id)initWithSampleQueryDescriptions:(id)a0 sortDescriptors:(id)a1 bufferSize:(long long)a2 healthStore:(id)a3;

@end
