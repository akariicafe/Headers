@class NSString, NSArray;
@protocol PXAudioAsset;

@interface _PXConcatenatingAudioAssetFetchResult : NSObject <PXAudioAssetFetchResult> {
    NSArray *_fetchResults;
    long long *_startIndexes;
    long long _subFetchResultsCount;
    long long _count;
}

@property (readonly, nonatomic) id<PXAudioAsset> firstObject;
@property (readonly, nonatomic) id<PXAudioAsset> lastObject;
@property (readonly, nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (BOOL)containsObject:(id)a0;
- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFetchResults:(id)a0;
- (id)_subFetchResultForIndex:(long long)a0 localIndex:(long long *)a1;

@end
