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

- (id)objectsAtIndexes:(id)a0;
- (id)initWithArray:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)containsObject:(id)a0;

@end
