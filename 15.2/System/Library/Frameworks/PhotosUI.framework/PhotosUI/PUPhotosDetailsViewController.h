@class NSString, _UIContentUnavailableView, PUAssetViewModel;
@protocol PUAccessoryContentViewControllerDelegate;

@interface PUPhotosDetailsViewController : PXPhotosDetailsUIViewController <PUAssetViewModelChangeObserver, PUAccessoryContentViewController> {
    struct { BOOL scrollViewControllerDidScroll; BOOL scrollViewControllerContentBoundsDidChange; } _superRespondsTo;
    _UIContentUnavailableView *_contentUnavailableView;
}

@property (readonly, nonatomic) PUAssetViewModel *assetViewModel;
@property (nonatomic) double maxVisibleHeightInEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } minimumContentSize;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)setEmpty:(BOOL)a0;
- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)contentAreaContainsPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_canShowWhileLocked;
- (void)scrollViewControllerDidScroll:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 options:(unsigned long long)a1;
- (void)setMaxVisibleContentInsetsWhenInEdit:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })px_safeAreaInsets;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBoundsInCoordinateSpace:(id)a0;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 changeReason:(long long)a1;
- (id)initWithContext:(id)a0 configuration:(id)a1 assetViewModel:(id)a2;
- (id)initWithContext:(id)a0 configuration:(id)a1;
- (void)_configureVisualSearchTopResultItem;
- (void)_layoutContentUnavailableView;
- (unsigned long long)occludedContentEdges;
- (void)editingDidChange:(BOOL)a0;
- (void)editorHeightDidChange;
- (void)visualSearchLookupWidgetDidTap;

@end
