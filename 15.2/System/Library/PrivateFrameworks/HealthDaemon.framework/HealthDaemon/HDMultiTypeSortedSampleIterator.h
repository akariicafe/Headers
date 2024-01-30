@class NSString, NSArray, HDSortedSampleIterator, NSMutableArray, HDProfile, HKSample, HKSortedQueryAnchor, HKDeletedObject;

@interface HDMultiTypeSortedSampleIterator : NSObject <HDSampleIterator, HDDeletedObjectIterator, HDRestorableIterator> {
    NSArray *_queryDescriptors;
    BOOL _includeDeletedObjects;
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
@property (readonly, nonatomic) HKDeletedObject *deletedObject;

- (id)initWithQueryDescriptors:(id)a0 includeDeletedObjects:(BOOL)a1 anchor:(id)a2 sortDescriptors:(id)a3 bufferSize:(long long)a4 profile:(id)a5;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)restoreIteratorStateFromData:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)advanceWithError:(id *)a0;
- (id)object;
- (id)iteratorStateData;

@end
