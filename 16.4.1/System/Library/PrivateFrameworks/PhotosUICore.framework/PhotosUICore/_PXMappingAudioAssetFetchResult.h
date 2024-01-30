@class NSString;
@protocol PXAudioAsset, PXAudioAssetFetchResult;

@interface _PXMappingAudioAssetFetchResult : NSObject <PXAudioAssetFetchResult> {
    id<PXAudioAssetFetchResult> _fetchResult;
    id /* block */ _block;
}

@property (readonly, nonatomic) id<PXAudioAsset> firstObject;
@property (readonly, nonatomic) id<PXAudioAsset> lastObject;
@property (readonly, nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectsAtIndexes:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;
- (id)initWithFetchResult:(id)a0 block:(id /* block */)a1;

@end
