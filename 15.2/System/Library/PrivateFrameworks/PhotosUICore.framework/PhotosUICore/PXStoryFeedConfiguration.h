@class NSString, PXGadgetSpec, PXMediaProvider, PXStoryHorizontalGadgetViewLayoutSpecManager;
@protocol PXStoryFeedActionPerformer, PXStoryFeedItemLayoutFactory;

@interface PXStoryFeedConfiguration : NSObject <NSCopying> {
    PXStoryHorizontalGadgetViewLayoutSpecManager *_gadgetViewLayoutSpecManager;
}

@property (copy, nonatomic) id /* block */ dataSourceManagerPromise;
@property (copy, nonatomic) id /* block */ specManagerPromise;
@property (copy, nonatomic) id /* block */ chromeControllerPromise;
@property (retain, nonatomic) id<PXStoryFeedItemLayoutFactory> itemLayoutFactory;
@property (retain, nonatomic) id<PXStoryFeedActionPerformer> actionPerformer;
@property (retain, nonatomic) PXMediaProvider *mediaProvider;
@property (nonatomic) BOOL shouldEmbedContentLayout;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (readonly, nonatomic) NSString *viewControllerTitle;

- (id)dataSourceManager;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 specManagerPromise:(id /* block */)a1 itemLayoutFactory:(id)a2;
- (id)specManagerWithExtendedTraitCollection:(id)a0;
- (id)horizontalGadgetViewSpecManagerWithExtendedTraitCollection:(id)a0;
- (id)fullFeedViewController;
- (id)copyForFullFeed;
- (id)objectReferenceForDestination:(id)a0;
- (void)handleContentSeen;

@end
