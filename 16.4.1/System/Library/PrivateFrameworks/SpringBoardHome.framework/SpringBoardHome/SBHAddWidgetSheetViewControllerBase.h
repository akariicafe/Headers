@class SBHAddWidgetSheetAppCollectionViewCellConfigurator, MTMaterialView;
@protocol SBIconListLayoutProvider, SBIconViewProviding, SBHAddWidgetSheetViewControllerDelegate;

@interface SBHAddWidgetSheetViewControllerBase : UIViewController

@property (weak, nonatomic) id<SBHAddWidgetSheetViewControllerDelegate> delegate;
@property (readonly, nonatomic) struct SBHWidgetFilteringParameters { unsigned long long families; BOOL includesNonStackable; } allowedWidgets;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (weak, nonatomic) id<SBIconViewProviding> iconViewProvider;
@property (retain, nonatomic) SBHAddWidgetSheetAppCollectionViewCellConfigurator *appCellConfigurator;
@property (retain, nonatomic) MTMaterialView *externalBackgroundView;

- (void).cxx_destruct;
- (id)initWithListLayoutProvider:(id)a0 iconViewProvider:(id)a1 allowedWidgets:(struct SBHWidgetFilteringParameters { unsigned long long x0; BOOL x1; })a2 appCellConfigurator:(id)a3;
- (id)initWithListLayoutProvider:(id)a0 iconViewProvider:(id)a1 allowedWidgets:(struct SBHWidgetFilteringParameters { unsigned long long x0; BOOL x1; })a2 appCellIconImageCache:(id)a3;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })preferredInsetsForSheetPresentationInInterfaceOrientation:(long long)a0;

@end
