@class NSString, NSMapTable, CRKPointerSet, NSObject, NSMutableArray;
@protocol CRKOrderedOneToManyKVOAccumulatorDelegate;

@interface CRKOrderedOneToManyKVOAccumulator : NSObject {
    CRKPointerSet *mInsertedObjects;
    CRKPointerSet *mReplacementObjects;
    NSMapTable *mIndexForDeletedObject;
    NSMapTable *mOriginalIndexOfMovedObject;
    NSMutableArray *mObservedShadow;
    long long mInitialArrayCount;
}

@property (readonly, nonatomic) BOOL hasChanges;
@property (copy, nonatomic) NSString *observedKeyPath;
@property (weak, nonatomic) NSObject *observedObject;
@property (weak, nonatomic) id<CRKOrderedOneToManyKVOAccumulatorDelegate> delegate;

- (void)_reset;
- (id)initWithObject:(id)a0 keyPath:(id)a1;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)_drain;
- (BOOL)_integrateChange:(id)a0 toArray:(id)a1;
- (unsigned long long)_prestateIndexForImmediateIndex:(unsigned long long)a0;
- (void)_validateArrayChangeToFinalCount:(long long)a0 accumulatedResults:(id)a1;
- (id)_resultsToArriveAtArray:(id)a0;

@end
