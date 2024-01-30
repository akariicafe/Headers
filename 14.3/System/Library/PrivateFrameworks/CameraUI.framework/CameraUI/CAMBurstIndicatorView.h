@class UILabel, NSString, UIView;

@interface CAMBurstIndicatorView : UIView

@property (readonly, nonatomic) UIView *_backgroundView;
@property (readonly, nonatomic) UILabel *_countLabel;
@property (readonly, nonatomic) long long _numberOfPhotos;
@property (nonatomic) long long layoutStyle;
@property (copy, nonatomic) NSString *contentSizeCategory;

- (id)initWithLayoutStyle:(long long)a0;
- (void)_performCaptureAnimation;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)finishIncrementingWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_updateAttributes;
- (void)reset;
- (void)_commonCAMAvalancheIndicatorViewInitializationWithLayoutStyle:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateCountLabelWithNumberOfPhotos;
- (long long)incrementWithCaptureAnimation:(BOOL)a0;

@end
