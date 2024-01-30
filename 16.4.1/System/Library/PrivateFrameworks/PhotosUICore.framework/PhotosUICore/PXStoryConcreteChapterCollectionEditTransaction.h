@class NSArray;
@protocol PXStoryChapterCollection;

@interface PXStoryConcreteChapterCollectionEditTransaction : NSObject <PXStoryChapterCollectionEditTransaction>

@property (readonly, nonatomic) id<PXStoryChapterCollection> originalChapterCollection;
@property (readonly, nonatomic) NSArray *edits;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOriginalChapterCollection:(id)a0 edits:(id)a1;

@end
