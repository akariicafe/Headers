@class NSString, PXGadgetSpec, PXMediaProvider, PXFeedHorizontalGadgetViewLayoutSpecManager;
@protocol PXFeedPlaceholderFactory, PXFeedItemLayoutFactory, PXFeedActionPerformer;

@interface PXFeedConfiguration : NSObject <NSCopying> {
    PXFeedHorizontalGadgetViewLayoutSpecManager *_gadgetViewLayoutSpecManager;
}

@property (copy, nonatomic) id /* block */ dataSourceManagerPromise;
@property (copy, nonatomic) id /* block */ specManagerPromise;
@property (copy, nonatomic) id /* block */ chromeControllerPromise;
@property (retain, nonatomic) id<PXFeedItemLayoutFactory> itemLayoutFactory;
@property (retain, nonatomic) id<PXFeedPlaceholderFactory> placeholderFactory;
@property (retain, nonatomic) id<PXFeedActionPerformer> actionPerformer;
@property (retain, nonatomic) PXMediaProvider *mediaProvider;
@property (nonatomic) BOOL shouldEmbedContentLayout;
@property (copy, nonatomic) id /* block */ visibleRectChangeObserver;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (readonly, nonatomic) NSString *viewControllerTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) long long horizontalGadgetStyle;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) NSString *gadgetLocalizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineGadgetTitle;
@property (readonly, nonatomic) unsigned long long gadgetAccessoryButtonType;
@property (readonly, nonatomic) NSString *gadgetAccessoryButtonLocalizedTitle;
@property (readonly, nonatomic) BOOL wantsEmbeddedScrollView;
@property (readonly, nonatomic) BOOL allowsPopOnEmptyBehavior;

- (id)dataSourceManager;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)createSeeAllViewController;
- (void)handleContentDismissed;
- (void)handleContentSeen;
- (id)horizontalGadgetViewSpecManagerWithExtendedTraitCollection:(id)a0;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 specManagerPromise:(id /* block */)a1 itemLayoutFactory:(id)a2;
- (id)objectReferenceForDestination:(id)a0;
- (id)specManagerWithExtendedTraitCollection:(id)a0;

@end
