@class UIImageView, UIImage, PKSpendingSummary;

@interface PKSpendingSummaryChartBarView : UIView {
    UIImageView *_bar;
    UIImageView *_placeholder;
    UIImage *_image;
    UIImage *_placeholderImage;
    double _barHeight;
    double _maximumHeight;
    PKSpendingSummary *_summary;
    id /* block */ _imageCompletion;
    _Atomic unsigned long long _generationCounter;
}

@property (nonatomic) BOOL showPlaceholder;
@property (nonatomic, getter=isBlurDisabled) BOOL blurDisabled;
@property (readonly, nonatomic) double minimumHeight;

- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)configureWithSummary:(id)a0 maximumHeight:(double)a1 barHeight:(double)a2 synchronous:(BOOL)a3 completion:(id /* block */)a4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateImageWithImage:(id)a0;
- (void)_generateImageForSummary:(id)a0 barHeight:(double)a1 maximumHeight:(double)a2 synchronous:(BOOL)a3;
- (void)_callCompletion;
- (void)_updatePlaceholder;
- (void)_updatePlaceholderImage;

@end
