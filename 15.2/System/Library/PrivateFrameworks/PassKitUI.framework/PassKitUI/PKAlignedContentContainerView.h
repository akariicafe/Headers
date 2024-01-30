@class UIView;

@interface PKAlignedContentContainerView : UIView {
    struct CGSize { double width; double height; } _size;
}

@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct { long long horizontalAlignment; long long verticalAlignment; } alignment;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithContentView:(id)a0 alignment:(struct { long long x0; long long x1; })a1 size:(struct CGSize { double x0; double x1; })a2;

@end
