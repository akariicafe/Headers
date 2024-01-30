@class NSString, UIVisualEffectView, UILabel;

@interface SFSiteRowCell : UICollectionViewCell <WBSStartPageListItemProxy> {
    UIVisualEffectView *_backgroundEffectView;
    UILabel *_label;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateVibrancy;

@end
