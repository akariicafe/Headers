@class NSString, VUILabel, VUIVideosImageView, VUISeparatorView;

@interface VUILibraryMenuItemViewCell : VUIListCollectionViewCell {
    VUIVideosImageView *_imageView;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imageName;
@property (readonly, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (readonly, nonatomic) VUISeparatorView *bottomSeparatorView;
@property (nonatomic) BOOL hideChevron;
@property (nonatomic) BOOL shouldAppearAsHeader;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
