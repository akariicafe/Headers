@class NSString, VUILabel, VUIVideosImageView, VUISeparatorView;

@interface VUILibraryMenuItemViewCell : VUIListCollectionViewCell {
    VUIVideosImageView *_accessoryView;
    VUIVideosImageView *_imageView;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imageName;
@property (readonly, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (readonly, nonatomic) VUISeparatorView *bottomSeparatorView;
@property (nonatomic) BOOL hideChevron;
@property (nonatomic) BOOL shouldAppearAsHeader;

- (BOOL)hasImage;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
