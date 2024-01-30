@class HDSortedSampleIterator, NSString, NSArray, HKSample, HDProfile, NSMutableArray, HKSortedQueryAnchor;

@interface HDMultiTypeSortedSampleIterator : NSObject <HDSampleIterator, HDRestorableIterator> {
    NSArray *_sampleQueryDescriptions;
    NSArray *_sortDescriptors;
    long long _bufferSize;
    HDProfile *_profile;
    HKSortedQueryAnchor *_anchor;
    NSMutableArray *_iterators;
    HDSortedSampleIterator *_nextIterator;
    BOOL _isInitialized;
}

@property (readonly, nonatomic) HKSample *sample;
@property (readonly, nonatomic) long long objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_upstreamIteratorsWithSampleQueryDescriptions:(id)a0 sortDescriptors:(id)a1 anchor:(id)a2 bufferSize:(long long)a3 profile:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)object;
- (BOOL)advanceWithError:(id *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_prepareIteratorsWithError:(id *)a0;
- (id)initForCopying;
- (BOOL)restoreIteratorStateFromData:(id)a0 error:(id *)a1;
- (id)iteratorStateData;
- (id)initWithSampleQueryDescriptions:(id)a0 sortDescriptors:(id)a1 bufferSize:(long long)a2 profile:(id)a3;

@end
