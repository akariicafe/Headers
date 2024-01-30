@class PXPhotosDetailsContext, NSString, PXWidgetSpec, PHAsset, PXTilingController, _PXUIContainerView, PXSectionedSelectionManager, NSObject, PXCaptionHashtagsEntryView;
@protocol PXWidgetEditingDelegate, PXWidgetDelegate, PXWidgetUnlockDelegate, PXAnonymousView;

@interface PXPhotosDetailsCaptionHashtagsWidget : NSObject <PXCaptionHashtagsEntryViewDelegate, PXPhotoLibraryUIChangeObserver, PXWidget>

@property (readonly, nonatomic) _PXUIContainerView *containerView;
@property (readonly, nonatomic) PXCaptionHashtagsEntryView *textEntryView;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain) PHAsset *asset;
@property (nonatomic) long long exitEditChangesSavingMode;
@property (copy, nonatomic) id /* block */ deferredAppearingAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (weak, nonatomic) id<PXWidgetEditingDelegate> widgetEditingDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
@property (readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
@property (readonly, nonatomic) long long contentViewAnchoringType;
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
@property (readonly, nonatomic) BOOL wantsFocus;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (nonatomic) struct CGSize { double width; double height; } maxVisibleSizeInEditMode;

@end
