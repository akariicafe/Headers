@class PXPhotosDetailsContext, PXWidgetSpec, PXTilingController, NSString, UIView, PXSectionedSelectionManager, NSObject, PXAssetActionManager;
@protocol PXWidgetEditingDelegate, PXWidgetDelegate, PXWidgetUnlockDelegate, PXWidgetInteractionDelegate, PXAnonymousView;

@interface PXDemoViewWidget : NSObject <PXWidget> {
    BOOL _isExpanded;
    double _height;
}

@property (readonly, nonatomic) UIView *_containerView;
@property (readonly, nonatomic) UIView *_contentView;
@property (nonatomic, setter=_setContentViewAnchoringType:) long long contentViewAnchoringType;
@property (nonatomic, setter=_setContentSize:) struct CGSize { double width; double height; } _contentSize;
@property (nonatomic, setter=_setDidLoadContent:) BOOL _didLoadContent;
@property (nonatomic, setter=_setAnimationCount:) long long _animationCount;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id<PXWidgetInteractionDelegate> widgetInteractionDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (weak, nonatomic) id<PXWidgetEditingDelegate> widgetEditingDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) PXTilingController *contentTilingController;
@property (readonly, nonatomic) long long contentLayoutStyle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedCaption;
@property (readonly, nonatomic) NSString *localizedDisclosureTitle;
@property (readonly, nonatomic) BOOL allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (readonly, nonatomic) BOOL supportsSelection;
@property (nonatomic, getter=isSelecting) BOOL selecting;
@property (readonly, nonatomic) BOOL supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) BOOL faceModeEnabled;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (nonatomic) struct CGSize { double x0; double x1; } maxVisibleSizeInEditMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_handleTapGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (double)preferredContentHeightForWidth:(double)a0;
- (void)loadContentData;
- (void)contentViewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)userDidSelectDisclosureControl;
- (void)_loadViews;
- (void)_handleLongPressGestureRecognizer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrameForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateContentViewColor;

@end
