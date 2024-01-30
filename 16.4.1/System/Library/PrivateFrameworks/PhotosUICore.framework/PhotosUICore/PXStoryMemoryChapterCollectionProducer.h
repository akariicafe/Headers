@class NSArray, PHMemory;

@interface PXStoryMemoryChapterCollectionProducer : PXStoryTransientChapterCollectionProducer {
    NSArray *_workQueue_originalPhotosGraphChapters;
}

@property (readonly, nonatomic) PHMemory *memory;

+ (id)chapterCollectionForPhotosGraphChapters:(id)a0 assets:(id)a1 keyAsset:(id)a2 error:(id *)a3;
+ (id)photosGraphChaptersForChapterCollection:(id)a0 originalPhotosGraphChapters:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithMemory:(id)a0 storyQueue:(id)a1;
- (id)initWithStoryQueue:(id)a0;
- (void)workQueue_saveEditTransaction:(id)a0 completionHandler:(id /* block */)a1;
- (id)workQueue_uneditedChapterCollectionWithAssets:(id)a0 keyAsset:(id)a1;

@end
