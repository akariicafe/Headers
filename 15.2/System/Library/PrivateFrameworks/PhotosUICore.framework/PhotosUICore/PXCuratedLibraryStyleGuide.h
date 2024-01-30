@class NSString, PXExtendedTraitCollection;

@interface PXCuratedLibraryStyleGuide : PXObservable <PXChangeObserver>

@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic) double lateralMargin;
@property (nonatomic) long long buttonStyle;
@property (nonatomic) long long secondaryToolbarPlacement;
@property (nonatomic) struct CGSize { double width; double height; } secondaryToolbarSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } secondaryToolbarContentInsets;
@property (nonatomic) long long toggleAspectFitButtonPlacement;
@property (nonatomic) long long zoomButtonsButtonPlacement;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } secondaryToolbarPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithExtendedTraitCollection:(id)a0;
- (id)init;
- (void)_update;

@end
