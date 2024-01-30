@class UIView;

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {
    UIView *_wrappedView;
    UIView *_wrappedViewContainer;
    struct CGSize { double width; double height; } _wrappedViewSize;
}

@property (retain, nonatomic) UIView *wrappedView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } wrappedViewInsets;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)_anyDateLabel;
- (void)prepareForReuse;
- (void)_updateWrappedViewFrame;
- (void)_setIsCenterCell:(BOOL)a0 shouldModifyAlphaOfView:(BOOL)a1;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateWrappedView;
- (void).cxx_destruct;

@end
