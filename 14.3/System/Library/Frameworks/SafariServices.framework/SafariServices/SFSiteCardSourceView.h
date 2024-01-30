@class NSString, UIImageView, UIImage, UILabel;

@interface SFSiteCardSourceView : UIView {
    UIImageView *_imageView;
    UILabel *_label;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
