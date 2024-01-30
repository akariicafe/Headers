@class UIView;

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {
    UIView *_wrappedView;
    UIView *_wrappedViewContainer;
    struct CGSize { double width; double height; } _wrappedViewSize;
}

@property (retain, nonatomic) UIView *wrappedView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateWrappedView;
- (void).cxx_destruct;
- (void)_setIsCenterCell:(BOOL)a0 shouldModifyAlphaOfView:(BOOL)a1;
- (void)prepareForReuse;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateWrappedViewFrame;
- (id)_anyDateLabel;

@end
