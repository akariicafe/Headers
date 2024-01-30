@class PXTilingController, NSString, PXWidgetBar, NSHashTable, PXWidgetCompositionSpec, PXScrollViewController;
@protocol PXWidgetCompositionElementDelegate, PXWidget;

@interface PXWidgetCompositionElement : NSObject <PXWidgetBarDelegate, PXWidgetDelegate> {
    struct { BOOL respondsToTransitionToViewControllerPreferredTransitionType; BOOL respondsToRequestViewControllerDismissalAnimated; } _delegateFlags;
    BOOL _isPerformingChanges;
}

@property (readonly, nonatomic) NSHashTable *_observers;
@property (readonly, nonatomic) PXWidgetBar *_header;
@property (readonly, nonatomic) PXWidgetBar *_footer;
@property (nonatomic, setter=_setNotifyingWidget:) BOOL _isNotifyingWidget;
@property (nonatomic) BOOL _isClassOfViewElement;
@property (readonly, nonatomic) id<PXWidget> widget;
@property (readonly, weak, nonatomic) PXScrollViewController *scrollViewController;
@property (weak, nonatomic) id<PXWidgetCompositionElementDelegate> delegate;
@property (retain, nonatomic) PXWidgetCompositionSpec *spec;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) PXTilingController *headerTilingController;
@property (readonly, nonatomic) PXTilingController *footerTilingController;
@property (nonatomic) struct CGSize { double width; double height; } widgetContentSize;
@property (nonatomic) BOOL shouldLoadWidgetContent;
@property (readonly, nonatomic) PXTilingController *animationOptionsOriginatingTilingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementWithWidget:(id)a0 scrollViewController:(id)a1;
+ (Class)headerBarClass;
+ (Class)footerBarClass;

- (void)prepare;
- (void)registerObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_invalidateFooter;
- (void)saveAnchoring;
- (void)unregisterObserver:(id)a0;
- (id)widgetViewHostingGestureRecognizers:(id)a0;
- (void)widgetRequestFocus:(id)a0;
- (id)widgetScrollViewControllerHostingWidget:(id)a0;
- (id)widgetViewControllerHostingWidget:(id)a0;
- (id)widgetExtendedTraitCollection:(id)a0;
- (void)widget:(id)a0 animateChanges:(id /* block */)a1 withAnimationOptions:(id)a2;
- (void)widgetLocalizedTitleDidChange:(id)a0;
- (void)widgetLocalizedSubtitleDidChange:(id)a0;
- (void)widgetLocalizedCaptionDidChange:(id)a0;
- (void)widgetLocalizedDisclosureTitleDidChange:(id)a0;
- (void)widgetPreferredContentHeightForWidthDidChange:(id)a0;
- (void)widgetHasLoadedContentDataDidChange:(id)a0;
- (void)widgetInvalidateContentViewAnchoringType:(id)a0;
- (void)widgetInvalidateContentLayoutStyle:(id)a0;
- (long long)widgetDefaultContentViewAnchoringTypeForDisclosureHeightChange:(id)a0;
- (BOOL)widget:(id)a0 transitionToViewController:(id)a1 withTransitionType:(long long)a2;
- (BOOL)widget:(id)a0 requestViewControllerDismissalAnimated:(BOOL)a1;
- (void)widgetBarDidSelectSubtitle:(id)a0;
- (void)widgetBarDidSelectDisclosureAffordance:(id)a0;
- (id)initWithWidget:(id)a0 scrollViewController:(id)a1;
- (void)_notifyWidgetUsingBlock:(id /* block */)a0;
- (void)_performContentChangeWhenSafe:(id /* block */)a0;
- (void)_performChanges:(id /* block */)a0 withAnimationOptions:(id)a1;
- (BOOL)_isViewElementAndCheckingInTile;
- (void)_updateFooter;
- (void)_updateHeader;
- (void)_invalidateHeader;
- (id)extendedTraitCollection;

@end
