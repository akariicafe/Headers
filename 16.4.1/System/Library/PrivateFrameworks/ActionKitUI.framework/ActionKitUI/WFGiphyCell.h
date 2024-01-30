@class UIImageView, UIActivityIndicatorView, NSURLSessionDataTask, WFGiphyObject;

@interface WFGiphyCell : UICollectionViewCell

@property (weak, nonatomic) UIActivityIndicatorView *indicatorView;
@property (weak, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) UIImageView *selectedImageView;
@property (weak, nonatomic) NSURLSessionDataTask *dataTask;
@property (weak, nonatomic) WFGiphyObject *object;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
