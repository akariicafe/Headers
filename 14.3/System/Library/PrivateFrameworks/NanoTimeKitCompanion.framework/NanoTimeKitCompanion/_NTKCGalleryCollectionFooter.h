@class NSString, UILabel;

@interface _NTKCGalleryCollectionFooter : UICollectionReusableView {
    UILabel *_label;
}

@property (retain, nonatomic) NSString *text;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_fontSizeDidChange;

@end
