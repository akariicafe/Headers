@class PXUpdater, PXCuratedLibraryStyleGuide, NSString, UIView, PXCuratedLibraryViewModel;

@interface PXCuratedLibrarySecondaryToolbarController : NSObject <PXChangeObserver> {
    BOOL _willUpdate;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXCuratedLibraryStyleGuide *styleGuide;
@property (readonly, nonatomic) UIView *secondaryToolbar;
@property (nonatomic) BOOL isAtTop;
@property (nonatomic) BOOL stretched;
@property (nonatomic) double height;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel;
@property (retain, nonatomic) UIView *contentView;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } containerViewAdditionalEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)_invalidateSecondaryToolbarLayout;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)updateIfNeeded;
- (void)_updateContentLayout;
- (void)_invalidatePositioning;
- (void)_updatePositioning;
- (void)_invalidateContentLayout;
- (void)_updateSecondaryToolbarLayout;
- (id)initWithContainerView:(id)a0 viewModel:(id)a1;

@end
