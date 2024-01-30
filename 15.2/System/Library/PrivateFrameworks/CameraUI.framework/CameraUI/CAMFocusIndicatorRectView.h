@class UIImageView;

@interface CAMFocusIndicatorRectView : UIView

@property (readonly, nonatomic) UIImageView *_imageView;
@property (readonly, nonatomic) long long style;
@property (nonatomic, getter=isInactive) BOOL inactive;
@property (nonatomic, getter=isPulsing) BOOL pulsing;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;

@end
