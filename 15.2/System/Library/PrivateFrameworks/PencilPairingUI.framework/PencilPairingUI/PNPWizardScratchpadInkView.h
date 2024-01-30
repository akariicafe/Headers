@class PKInk, UIImageView;

@interface PNPWizardScratchpadInkView : UIView {
    UIImageView *_imageView;
}

@property (readonly, nonatomic) PKInk *ink;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL pressed;

+ (void)initialize;
+ (double)preferredHeight;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithIndex:(long long)a0;
- (void).cxx_destruct;

@end
