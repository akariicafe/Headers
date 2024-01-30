@class UIView;

@interface AMSUIWebSnapshotView : AMSUICommonView

@property (retain, nonatomic) UIView *snapshot;

+ (void)_screenCapFromView:(id)a0 completion:(id /* block */)a1;
+ (id)_imageViewForImage:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateSnapshot:(id)a0;
- (id)initWithView:(id)a0 completion:(id /* block */)a1;

@end
