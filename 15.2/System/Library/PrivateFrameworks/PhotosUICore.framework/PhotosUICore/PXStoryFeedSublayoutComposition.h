@class PXLayoutGenerator;
@protocol PXStoryFeedViewLayoutSpec;

@interface PXStoryFeedSublayoutComposition : PXGGeneratedSublayoutComposition {
    PXLayoutGenerator *_cachedLayoutGenerator;
}

@property (retain, nonatomic) id<PXStoryFeedViewLayoutSpec> spec;
@property (readonly, nonatomic) long long scrollableAxis;

- (void).cxx_destruct;
- (id)configuredLayoutGenerator;

@end
