@class MTMaterialView, NSSet, UIScrollView, SBIconListView, UIView;

@interface SBHStackConfigurationApertureView : UIView {
    MTMaterialView *_backgroundMaterialView;
    UIView *_backgroundStackMatchingView;
    UIView *_backgroundFilterView;
}

@property (nonatomic) BOOL usesConcentricCorners;
@property (retain, nonatomic) SBIconListView *iconListView;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (readonly, nonatomic) NSSet *backgroundViews;
@property (readonly, nonatomic) UIView *widgetStackMatchingBackgroundView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateFilterViewForUserInterfaceStyle:(long long)a0;

@end
