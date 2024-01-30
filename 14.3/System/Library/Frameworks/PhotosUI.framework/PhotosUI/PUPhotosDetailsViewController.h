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

- (void)scrollViewControllerDidScroll:(id)a0;
- (void)setEmpty:(BOOL)a0;
- (void).cxx_destruct;
- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)initWithContext:(id)a0 configuration:(id)a1;
- (void)_layoutContentUnavailableView;
- (unsigned long long)occludedContentEdges;
- (void)editingDidChange:(BOOL)a0;
- (void)editorHeightDidChange;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithContext:(id)a0 configuration:(id)a1 assetViewModel:(id)a2;
- (id)initWithContext:(id)a0 options:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })px_safeAreaInsets;
- (BOOL)_canShowWhileLocked;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBoundsInCoordinateSpace:(id)a0;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 changeReason:(long long)a1;
- (void)setMaxVisibleContentInsetsWhenInEdit:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)contentAreaContainsPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;

@end
