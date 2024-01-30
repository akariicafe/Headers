@class NSString, UIImageView, UIImage, UIView, SFSiteCardSourceView, UILabel;

@interface SFSiteCardCell : UICollectionViewCell <_SFSiteCardModel> {
    UIImageView *_badgeView;
    UIImageView *_imageView;
    SFSiteCardSourceView *_sourceView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (readonly, nonatomic) UIView *contextMenuPreviewView;
@property (retain, nonatomic) UIImage *badge;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) UIImage *sourceIcon;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
