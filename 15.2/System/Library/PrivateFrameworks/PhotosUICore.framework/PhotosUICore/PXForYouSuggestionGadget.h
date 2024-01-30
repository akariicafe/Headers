@class PXRegionOfInterest, NSString, PXGadgetSpec, PXForYouSuggestionGadgetContentView, UIImage, PXUIMediaProvider, NSObject;
@protocol PXDisplayAsset, PXForYouSuggestionGadgetDelegate, OS_dispatch_queue, PXDisplaySuggestion;

@interface PXForYouSuggestionGadget : NSObject <PXDiagnosticsEnvironment, PXGadget>

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;

@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (retain, nonatomic) id<PXDisplayAsset> keyAsset;
@property (nonatomic) struct CGSize { double width; double height; } cachedHeightForWidth;
@property (retain, nonatomic) PXForYouSuggestionGadgetContentView *contentView;
@property (nonatomic) BOOL contentViewVisible;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned short suggestionType;
@property (retain, nonatomic) id<PXDisplaySuggestion> suggestion;
@property (weak, nonatomic) id<PXForYouSuggestionGadgetDelegate> delegate;
@property (nonatomic, getter=isContentHidden) BOOL contentHidden;
@property (readonly, nonatomic) UIImage *currentImage;
@property (nonatomic) BOOL blursDegradedContent;
@property (nonatomic) BOOL shouldSuppressSelectionAnimation;
@property (nonatomic) BOOL shouldShowSyndicationAttributionView;
@property (readonly, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleContentRect;

+ (void)preloadResources;

- (void)contentViewDidDisappear;
- (void)commitPreviewViewController:(id)a0;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)contentViewWillAppear;
- (void)userDidSelectGadget;
- (id)debugURLsForDiagnostics;
- (id)uniqueGadgetIdentifier;
- (void)contentHasBeenSeen;
- (void)gadgetControllerHasAppeared;
- (id)targetPreviewViewForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (id)previewViewControllerAtLocation:(struct CGPoint { double x0; double x1; })a0 fromSourceView:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)didDismissPreviewViewController:(id)a0 committing:(BOOL)a1;
- (void)_updateTitleAndSubtitle;
- (id)init;
- (id)initWithSuggestion:(id)a0;
- (void)dealloc;
- (id)debugDictionary;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)_updateKeyAsset;
- (void)_updateContentViewMode;
- (id)_contentViewIfLoaded;
- (id)syndicationReplyAction;
- (void)_handleDismiss;
- (void)_markSuggestionAsActive;
- (void)_markSuggestionAsDeclined;
- (void)_updateSyndicationHighlightForContentView:(id)a0;

@end
