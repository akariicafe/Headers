@class UILabel, PXAssetActionManager, UIButton, UIView, PXWidgetSpec, NSString, PXPeopleSuggestionDataSource, PXPhotosDetailsContext, PHPerson, PXTilingController, NSLayoutConstraint, PXOneUpPresentation, PXSectionedSelectionManager;
@protocol PXWidgetEditingDelegate, PXWidgetDelegate, PXWidgetUnlockDelegate, PXWidgetInteractionDelegate;

@interface PXPeopleCandidateWidget : NSObject <PXChangeObserver, PXUIWidget>

@property (retain, nonatomic) PXPeopleSuggestionDataSource *dataSource;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) PHPerson *person;
@property (nonatomic) BOOL dismissed;
@property (weak, nonatomic) UIButton *notNowButton;
@property (retain, nonatomic) NSLayoutConstraint *avatarToLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *notNowToTrailingConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;
@property (readonly, nonatomic) BOOL cursorInteractionEnabled;
@property (weak, nonatomic) id<PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id<PXWidgetInteractionDelegate> widgetInteractionDelegate;
@property (weak, nonatomic) id<PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (weak, nonatomic) id<PXWidgetEditingDelegate> widgetEditingDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (readonly, nonatomic) BOOL hasContentForCurrentInput;
@property (readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property (readonly, nonatomic) BOOL hasLoadedContentData;
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
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) BOOL wantsFocus;
@property (readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property (readonly, nonatomic) BOOL isInEditMode;
@property (nonatomic) struct CGSize { double x0; double x1; } maxVisibleSizeInEditMode;

- (void)setContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (double)preferredContentHeightForWidth:(double)a0;
- (void)loadContentData;
- (void)unloadContentData;
- (void)controllerTraitCollectionDidChangeFrom:(id)a0 to:(id)a1;
- (void)updateNotNowButton;
- (void)reviewTapped:(id)a0;
- (void)notNowTapped:(id)a0;
- (void)_suggestionsDidFinish:(id)a0;
- (void)_dismissWithAnimation:(BOOL)a0;
- (void)_updateAndSetDescriptionFont;

@end
