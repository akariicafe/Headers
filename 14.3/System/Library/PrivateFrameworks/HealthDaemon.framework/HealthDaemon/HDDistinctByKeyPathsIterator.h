@class NSString, NSArray, HKSample, NSMutableSet;
@protocol HDSampleIterator, HDRestorableIterator;

@interface HDDistinctByKeyPathsIterator : NSObject <HDSampleIterator, HDRestorableIterator> {
    id<HDSampleIterator, HDRestorableIterator> _sourceIterator;
    NSArray *_keyPaths;
    NSMutableSet *_seenValues;
}

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
- (BOOL)advanceWithError:(id *)a0;
- (BOOL)restoreIteratorStateFromData:(id)a0 error:(id *)a1;
- (id)iteratorStateData;
- (id)initWithSourceIterator:(id)a0 keyPaths:(id)a1;

@end
