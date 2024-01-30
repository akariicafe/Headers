@class UIView;

@interface AMSUIWebSnapshotView : AMSUICommonView

@property (retain, nonatomic) UIView *snapshot;
@property (nonatomic) double originalRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalSnapshotFrame;
@property (nonatomic) long long originalInterfaceStyle;
@property (nonatomic) unsigned long long visibilityModifiers;

+ (void)_screenCapFromView:(id)a0 completion:(id /* block */)a1;
+ (id)_imageViewForImage:(id)a0;

- (void)layoutSubviews;
- (void)_updateSnapshot:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithView:(id)a0 completion:(id /* block */)a1;
- (BOOL)_visibilityUnmodified;

@end
