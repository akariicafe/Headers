@class NSString, _SFSiteIconView, UIImage, UIView, UILabel;

@interface SFSiteIconCell : UICollectionViewCell <_SFSiteIconModel> {
    UIView *_iconDimmingView;
    _SFSiteIconView *_iconView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (readonly, nonatomic) UIView *contextMenuPreviewView;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)setIconFromBookmark:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
