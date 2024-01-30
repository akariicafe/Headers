@class NSString, _SFSiteIconView, UIImage, UIView, UILabel;

@interface SFSiteIconCell : UICollectionViewCell <WBSStartPageIconProxy> {
    UIView *_iconDimmingView;
    _SFSiteIconView *_iconView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (copy, nonatomic) NSString *visualEffectGroupName;
@property (readonly, nonatomic) UIView *contextMenuPreviewView;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIconFromBookmark:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)focusEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)configureUsingAction:(id)a0 backgroundEffect:(id)a1;
- (void)_setAction:(id)a0;
- (void)_setAction:(id)a0 backgroundEffect:(id)a1;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)setIconFromAction:(id)a0;
- (void).cxx_destruct;
- (void)updateViewsDependingOnCustomTraits;

@end
