@class NSString, NSArray;
@protocol PXAudioAsset;

@interface _PXAudioAssetArrayFetchResult : NSObject <PXAudioAssetFetchResult> {
    NSArray *_assets;
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
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
