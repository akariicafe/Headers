@class NSArray, NSDictionary, NSSet, NSMutableArray;
@protocol PXDisplayAssetFetchResult;

@interface PXStoryExplicitChapterCollection : NSObject <PXStoryMutableExplicitChapterCollection, PXStoryChapterCollection> {
    NSMutableArray *_initializedChapters;
    id<PXDisplayAssetFetchResult> _initializedAssets;
}

@property (readonly, nonatomic) NSArray *chapters;
@property (readonly, nonatomic) NSDictionary *chapterIndexesByIdentifier;
@property (readonly, nonatomic) NSSet *chapterBeginningAssetlocalIdentifiers;
@property (readonly, nonatomic) long long numberOfChapters;

- (void).cxx_destruct;
- (id)chapterAtIndex:(long long)a0;
- (void)addChapterWithAssetRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 configuration:(id /* block */)a1;
- (id)chapterContainingAsset:(id)a0;
- (BOOL)containsChapterBeginningWithAsset:(id)a0;
- (long long)indexOfChapterWithIdentifier:(id)a0;
- (id)initWithAssets:(id)a0 configuration:(id /* block */)a1;

@end
